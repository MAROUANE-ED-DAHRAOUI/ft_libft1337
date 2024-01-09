/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:17:47 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 15:59:10 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_nbr(int nb)
{
	if (!nb)
		return (0);
	else if (nb < 0)
		return (-nb);
	return (nb);
}

int	count_nbr(int nb)
{
	int	cnt_nbr;

	cnt_nbr = 0;
	if (nb <= 0)
	{
		cnt_nbr++;
	}
	while (nb != 0)
	{
		cnt_nbr++;
		nb /= 10;
	}
	return (cnt_nbr);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		len;

	len = count_nbr(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		str[0] = '-';
	while (nb != 0)
	{
		len--;
		str[len] = check_nbr(nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/* int main()
{
	//int nb = -0;
	char *str;
	str = ft_itoa(2147483647);
	printf("%s\n", str);
	return (0);
} */
