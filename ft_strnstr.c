/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:43:26 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 18:45:32 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!haystack && len == 0 && needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		l = 0;
		while (needle[l] == haystack[i + l] && haystack[i + l] && i + l < len)
			l++;
		if (needle[l] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
	//const char *hay = "marouane hello how are you!";
	//const char *need = "low";

	//char *final = ft_strnstr(NULL, NULL, 20);

	//printf("%s\n", final);
	printf("%s", strnstr(NULL, "jhfghgj", 0));

	return (0);
}
