/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:16:43 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/26 10:06:52 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	i;

	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
		ft_memcpy(ds, sr, len);
	else
	{
		while (len-- > 0)
		{
			ds[len] = sr[len];
		}
	}
	return (dst);
}
/*int main()

	char src[11] = "Hello 1337";
	char dest[14] = "qqqqq";

	return (printf("%s\n", ft_memmove(dest, src, 7)));
}*/ 
/*int main()
{
	char test[] = "test test allah allah";
	 char src[] = "hello brother";
	ft_memmove(test, src, sizeof(src));
	printf("%s\n", test);
	return (0);
}*/
