/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42urduliz.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:16:36 by jperez            #+#    #+#             */
/*   Updated: 2022/12/22 18:16:39 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words_2(char *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (s[i] != c && s[i] != '\0')
		cont++;
	while (s[i])
	{
		if (((s[i] == c && s[i + 1] != c) \
			&& s[i + 1] != '\0'))
			cont++;
		i++;
	}
	return (cont);
}

char	**ft_split_2(char **matrix, char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == c && str[i]))
			i++;
		j = 0;
		while (str[i + j] != c && str[i + j])
			j++;
		matrix[k] = (char *)malloc(sizeof(char) * (j + 1));
		if (!matrix[k])
			return (NULL);
		j = 0;
		while (str[i] != c && str[i])
			matrix[k][j++] = str[i++];
		matrix[k][j] = '\0';
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}
