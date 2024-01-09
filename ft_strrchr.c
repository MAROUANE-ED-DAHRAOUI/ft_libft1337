/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:47:16 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 16:09:27 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len && len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		else
			len--;
	}
	if (s[len] == (char)c)
		return ((char *)s + len);
	return (NULL);
}
/* #include<libc.h>
int main()
{
	// char *str = "helo berooont";
	// char ch = 'o';
	// char *ptr = ft_strrchr(str, ch);

	// if(ptr)
	// 	printf("character is : %c in position %ld\n", ch, ptr - str);
	// else
	// 	printf("character Not Found in string\n");

	// return (0);
	strrchr(NULL,'a');
}
 */