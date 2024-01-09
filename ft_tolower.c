/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:58:38 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/19 13:00:50 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*int main()
{
	char *tst = "HELLO WORL";
	int i = 0;

	while(tst[i])
	{
		printf("%c", ft_tolower(tst[i]));
		i++;
	}
	return (0);
}*/
