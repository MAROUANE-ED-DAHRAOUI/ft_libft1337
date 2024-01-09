/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:41:33 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 16:04:49 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if (((unsigned char)s1[i] == 0) || ((unsigned char)s2[i] == 0))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char *str = "hello bro";
	char *ptr;

	//int Sum = ft_strncmp(str, ptr, 10);
	int Summ = strncmp(str, ptr, 10);

	printf("Defrecnce between s1 & s2 = %d\n", Summ);

	return (0);
}*/
