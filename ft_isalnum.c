/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:52:54 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 11:56:26 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*int main()
{
	char c = 'Q';
	printf("%d\n", ft_isalnum(c));

	c = 'a';
	printf("%d\n", ft_isalnum(c));

	c = '8';
	printf("%d\n", ft_isalnum(c));

	c = '-';

	printf("%d\n", ft_isalnum(c));

	return (0);
}*/
