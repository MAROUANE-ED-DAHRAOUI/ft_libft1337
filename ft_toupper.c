/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:01:12 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/27 10:20:40 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}
/*int main()
{
	char str[11] = "helo Brris";
	int i = 0;

	while(str[i] != '\0')
	{
		printf("%c", toupper(str[i]));
		i++;
	}
	return (0);
}*/
