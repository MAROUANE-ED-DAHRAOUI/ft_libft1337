/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:21:07 by med-dahr          #+#    #+#             */
/*   Updated: 2023/12/23 13:48:03 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total_words(char const *str, char dil)
{
	int	i;
	int	l_words;

	i = 0;
	l_words = 0;
	while (str[i])
	{
		if (str[i] && str[i] == dil)
			i++;
		if (str[i] && str[i] != dil)
			l_words++;
		while (str[i] && str[i] != dil)
			i++;
	}
	return (l_words);
}

static void	ft_free(char **res, int l_words)
{
	int	i;

	i = -1;
	while (++i <= l_words)
		free(res[i]);
	free(res);
}

static char	*get_word(char const *str, int *p_word, char dil)
{
	int		start;
	int		last;
	char	*res;

	start = *p_word;
	while (str[start] && str[start] == dil)
		start++;
	last = start;
	while (str[last] && str[last] != dil)
		last++;
	res = ft_substr(str, start, last - start);
	*p_word = last;
	return (res);
}

char	**ft_split(char const *str, char dil)
{
	char	**res;
	int		position;
	int		p_word;
	int		len_words;

	if (!str)
		return (NULL);
	len_words = ft_total_words(str, dil);
	res = (char **)malloc(sizeof(char *) * (len_words + 1));
	if (!res)
		return (NULL);
	position = -1;
	p_word = 0;
	while (++position < len_words)
	{
		res[position] = get_word(str, &p_word, dil);
		if (res[position] == NULL)
		{
			ft_free(res, position);
			return (NULL);
		}
	}
	res[position] = NULL;
	return (res);
}
/*int main()
{
	//char const *str = "hell hhhhhlll hibro";
	//char dil = ' ';
	int i;
	i = 0;

	char **res = ft_split("hello!zzzzzzzz", 'z');
	while(res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}

	return (0);
}*/
