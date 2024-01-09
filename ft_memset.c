/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:18:48 by med-dahr          #+#    #+#             */
/*   Updated: 2024/01/06 13:12:29 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main()
{
	unsigned char ptr[13] = "Hello World!";
	memset(ptr + 7, 'a', /0);
	printf("%s\n", ptr);

	return (0);
}*/

/*int main()
{
	char nb[5] = "hello world";


	// Fill 8 characters starting from str[13] with '.'
	ft_memset(nb, 555, sizeof(nb));
	int i = 0;
	while(i < 5)
	{
		printf("nb[%d] == %c\n", i, nb[i]);
		i++;
	}
	return (0);
}
*/
/*int main()
{
	int nb = 42;
	ft_memset(&nb, 5,2);
	ft_memset(&nb,57,1);
	ft_memset(&nb,0,2);
	ft_memset(&nb,42,1);
	printf("%d", nb);
}*/
