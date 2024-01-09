/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:59:37 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 12:00:54 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main()
{
	char c = 'd';
	printf("%d\n", ft_isascii(c));
	c = ' ';
	printf("%d\n", ft_isascii(c));
	c = '0';
	printf("%d\n", ft_isascii(c));

	c = '_';
	printf("%d\n", ft_isascii(c));

	return (0);
}*/
