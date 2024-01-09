/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:35:43 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/20 14:18:23 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main()
{
	size_t size = 3;

	char dest[25] = "hello ";
	const char *src;

	size_t  res, ress;
	res = 0;
	res = ft_strlcpy(dest, src, size);

	printf("%zu\n%s\n", res, dest);

	ress = strlcpy(dest, src, size);
	printf("%zu\n%s\n", ress, dest);
	return (0);
}*/
