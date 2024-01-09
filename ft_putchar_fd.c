/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:53:12 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/05 12:59:09 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*#include<stdio.h>
#include<fcntl.h>
int main()
{
	char str[10]="this is";
	int fd = open("test", O_WRONLY);
	int i = 0;
	printf("%d", fd);
	while(i < 5)
	{
		ft_putchar_fd(str[i++], fd);
	}
	ft_putchar_fd('c', 1);
}*/
