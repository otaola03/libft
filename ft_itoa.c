/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:15:48 by jperez            #+#    #+#             */
/*   Updated: 2022/09/13 12:32:54 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_save_space(char *dst, int n, int *lenght)
{
	*lenght = 0;
	if (n <= 0)
	{
		n = -n;
		*lenght = *lenght + 1;
	}
	while (n > 0)
	{
		n = n / 10;
		*lenght = *lenght + 1;
	}
	dst = (char *)malloc(sizeof(char) * (*lenght + 1));
	return (dst);
}

char	*ft_keep_number(char *dst, int n, int lenght, int *i)
{
	if (n < 0)
	{
		n = -n;
		dst[*i] = '-';
		*i = *i + 1;
	}
	if (n >= 10)
		ft_keep_number(dst, n / 10, lenght, i);
	dst[*i] = n % 10 + '0';
	*i = *i + 1;
	dst[*i] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		lenght;
	int		i;

	if (n == -2147483648)
	{
		dst = (char *)malloc(sizeof(char) * 12);
		if (!dst)
			return (NULL);
		ft_strlcpy(dst, "-2147483648", 12);
		return (dst);
	}
	i = 0;
	dst = NULL;
	dst = ft_save_space(dst, n, &lenght);
	if (!dst)
		return (NULL);
	dst = ft_keep_number(dst, n, lenght, &i);
	return (dst);
}
