/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:51:57 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 16:03:52 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (s + start), len + 1);
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t a = 18446744073709551615;
	char *ptr_sub = ft_substr("hola", 4294967295, a);
	printf("%s\n", ptr_sub);
	return (0);
}*/
