/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:49:45 by jperez            #+#    #+#             */
/*   Updated: 2022/09/12 20:21:34 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	lenght;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lenght = ft_strlen(s1) - 1;
	while (lenght >= 0 && ft_strchr(set, s1[lenght]))
		lenght--;
	return (ft_substr(s1, 0, lenght + 1));
}
