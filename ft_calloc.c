/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:49:46 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 15:51:16 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}
/*#include <stdio.h>
int main()
{
	 char *str = calloc(0, 0);
	 str[0] = 5;
	 printf("%d\n", str[0]);
	
	return (0);
}*/