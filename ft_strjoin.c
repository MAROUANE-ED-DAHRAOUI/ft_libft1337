/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:27:04 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 15:57:39 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && s1[i] && i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && j < ft_strlen(s2))
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*int main()
{
	char *s1  = NULL;
	char *s2 = "world";

	char *ptr = ft_strjoin(s1, s2);

	printf("%s\n", ptr);
	return (0);
}*/
