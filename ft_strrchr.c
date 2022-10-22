/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:19:30 by jperez            #+#    #+#             */
/*   Updated: 2022/09/13 09:19:46 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = NULL;
	while (*s)
	{
		if (*s == (const char) c)
			pos = s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *) s);
	return ((char *)pos);
}
