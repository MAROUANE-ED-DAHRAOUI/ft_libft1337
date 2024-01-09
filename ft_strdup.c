/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:24:56 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/23 15:50:41 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *ptr)
{
	int		len;
	char	*buffer;

	len = ft_strlen(ptr);
	buffer = malloc((len + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, ptr, len * sizeof(char) + 1);
	return (buffer);
}
/*#include <stdio.h>
int main()
{
	const char *s1 = NULL;

	char *ptr = ft_strdup(s1);

	printf("%s\n", ptr);

	return (0);

}*/
