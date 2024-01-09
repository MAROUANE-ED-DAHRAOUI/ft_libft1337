/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:09:04 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/28 11:40:00 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t nb)
{
	unsigned char	*str;
	unsigned char	*ptr;
	size_t			i;

	str = (unsigned char *)s1;
	ptr = (unsigned char *)s2;
	i = 0;
	while (i < nb)
	{
		if (str[i] == ptr[i])
			i++;
		else
			return (str[i] - ptr[i]);
	}
	return (0);
}
/*int main()
{
	char *src = "hello Word";
	char *dest = "hel";

	int final = memcmp(src, dest, 8);

	printf("%d\n", final);

	return (0);
}*/
