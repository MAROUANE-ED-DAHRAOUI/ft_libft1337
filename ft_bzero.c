/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:46:02 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 11:57:11 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	ft_memset(ptr, 0, size);
}
/*int main()
{
	char buffer[20];
	ft_bzero(buffer, sizeof(buffer));

	for(int i = 0; i < sizeof(buffer); i++)
	{
		printf("%d\n", buffer[i]);
	}
	return (0);
}*/
