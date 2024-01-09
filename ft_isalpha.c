/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:55:31 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 11:59:15 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int main()
{
	char med[10] = "Hello-bro";

	int i = 0;

	while(med[i])
	{
		if(ft_isalpha(med[i]) == 1)
				i++;
		else
			printf("errorrrrrrrrrrrrrrr");
			return (0);
	}

	return (0);
 }*/
