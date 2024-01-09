/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:34:57 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 16:02:28 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	t_len;
	size_t	i;

	if (!size && !dst)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	t_len = d_len + s_len;
	if (d_len > size || size == 0)
		return (s_len + size);
	i = 0;
	while (d_len < (size - 1) && src[i])
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = 0;
	return (t_len);
}

/* #include<stdio.h>
#include<libc.h>
int main()
{
	// char dst[] = "world";
	char src[] = "hello brother";

//	size_t res = ft_strlcat(dst, src, 8);
	ft_strlcat(NULL, src, 0);

//	printf("%zu\n", res);
	// printf("%zu\n", ress);
	// return (0);
} */
