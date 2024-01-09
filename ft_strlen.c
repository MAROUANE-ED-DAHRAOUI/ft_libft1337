/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:38:28 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/23 14:00:44 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*int main()
{
	char *s = "hello world!";
	printf("%zu\n", ft_strlen(s));

	s = NULL;
	printf("%zu\n", ft_strlen(s));

	return (0);
}*/
