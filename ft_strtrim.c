/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:49:38 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/21 12:55:46 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first;
	int	last;
	int	len;

	if (!s1 || !set)
		return (NULL);
	last = ft_strlen(s1) - 1;
	if (last < 0)
		return (ft_strdup(""));
	first = 0;
	while (ft_strchr(set, s1[first]))
		++first;
	if (s1[first] == 0)
		return (ft_strdup(""));
	while (ft_strrchr(set, s1[last]))
		--last;
	len = last - first + 1;
	return (ft_substr(s1, first, len));
}
/*#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *ptr = "1337hello word1337";
	char *str = "1337";

	char *final = ft_strtrim("", "");

	printf("%s\n", final);

	return (0);
}*/
