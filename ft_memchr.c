/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:07:00 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/23 13:39:30 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t nb)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			i;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < nb)
	{
		if (ptr[i] == ch)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello brother";
	char ch = 'e';
	char *Ptr = ft_memchr(0x7ffeec4bf640, 933(a5): '\245', 31);
	printf("%s\n",  Ptr);
	return (0);
}*/
