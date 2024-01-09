/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:01:28 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/24 17:00:59 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nb)
{
	if (nb >= 48 && nb <= 57)
		return (1);
	return (0);
}
/*int main()
{
	char c = '8';

	printf("%d\n", ft_isdigit(c));

	c = 'e';
	printf("%d\n", ft_isdigit(c));
	return (0);
}*/
