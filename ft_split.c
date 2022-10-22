/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:35:01 by jperez            #+#    #+#             */
/*   Updated: 2022/09/13 12:36:06 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_count_words(const char *s, char c)
{
	int	cont;

	cont = 0;
	if (*s != c && *s != '\0')
		cont++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			cont++;
		s++;
	}
	return (cont);
}

char	*ft_find_word(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (ft_substr(s, 0, i));
		i++;
	}
	return (ft_substr(s, 0, i));
}

char	**ft_fill_matrix(char **matrix, const char *s, char c, int max)
{
	int	i;

	i = 0;
	if (*s != c && *s != '\0')
	{
		matrix[i] = ft_find_word(s, c);
		i++;
		s++;
	}
	while (*s && i < max)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
		{
			matrix[i] = ft_find_word(s + 1, c);
			i++;
		}
		s++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;

	words = ft_count_words(s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (!matrix)
		return (NULL);
	matrix = ft_fill_matrix(matrix, s, c, words);
	return (matrix);
}
