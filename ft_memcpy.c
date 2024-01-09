/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:13:34 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/25 15:16:40 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	if (!sr && !ds)
		return (NULL);
	else
	{
		while (i < size)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
/*int main()
{
	unsigned char src[12] = "hello marou";
	unsigned char dest[13];

	ft_memcpy(dest, src, sizeof(src));

	printf("%s\n", dest);

	return (0);
}*/
/*#include <stdio.h>
int main()
{
    unsigned int dst[5] = {10, 20, 30, 40, 50};
    unsigned int src[10] = {2, 2, 2, 2, 2, 2, 2};
    ft_memcpy(dst, src, sizeof(dst));
    int i = 0;
    while(i < 5)
    {
        printf("%u\n", dst[i]);
        i++;
    }
    //memcpy(dst, src, 10);
    //printf("%s\n", dst);

    return (0);
}*/
