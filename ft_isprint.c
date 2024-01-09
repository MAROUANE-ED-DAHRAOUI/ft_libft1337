/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:03:51 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 21:38:44 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main()
{
	char c = '\n';
	printf("%d\n", ft_isprint(c));
	c = '\t';
	printf("%d\n", ft_isprint(c));

	c = ' ';
	printf("%d\n", ft_isprint(c));

	c = '	';
	printf("%d\n", ft_isprint(c));
	c = ',';
	printf("%d\n", ft_isprint(c));

	return (0);
}*/
