/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:38:46 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/29 11:46:19 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;
	size_t	i;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*int main()
{
	printf("%d\n", ft_atoi("  2147483650"));
	printf("%d\n", ft_atoi("0    --+--++--+--uyuyfghj78***------+"));
	printf("%d\n", ft_atoi("98"));
	printf("%d\n", ft_atoi("                -1222447444"));

	return (0);

}*/
/*
int main() {
    // Test cases with various input strings
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("-456"));
    printf("%d\n", ft_atoi(" 789"));
    printf("%d\n", ft_atoi("\t-101"));
    printf("%d\n", ft_atoi("  202  "));
    printf("%d\n", ft_atoi("  +303"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("   0"));
    printf("%d\n", ft_atoi("   +0"));
    printf("%d\n", ft_atoi("   -0"));
    printf("%d\n", ft_atoi("   +"));
    printf("%d\n", ft_atoi("   -"));
    printf("%d\n", ft_atoi("   abc")); // Non-numeric string

    return 0;
}*/
