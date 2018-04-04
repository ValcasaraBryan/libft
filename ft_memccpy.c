/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:23:18 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:57:17 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			str;
	unsigned int	i;
	unsigned int	a;
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	str = (char)c;
	i = 0;
	if (!((destination = (unsigned char *)malloc(sizeof(char) * n + 1))))
		return (NULL);
	ft_putnbr((int)n + 1);
	ft_putchar('\n');
	ft_putnbr((int)i);
	ft_putchar('\n');

	if (n == 0)
		return (destination);
/*
	ft_putstr("source      = ");
	ft_putstr((const char *)source);
	ft_putchar('\n');
	ft_putstr("destination = ");
	ft_putstr((const char *)destination);
	ft_putchar('\n');
	ft_putstr("str         = ");
	ft_putchar((char)str);
	ft_putchar('\n');
*/
	while (source[i] != str && source[i] != '\0')
	{
		if (source[i] == str)
			a = TRUE;
		else
			a = FALSE;
		i++;
	}
	i = 0;
	if (a == TRUE)
	{
		while (i < n && source[i] != str && source[i] != '\0')
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = source[i];
	}
	else
	{
		while (i < n || source[i] != '\0')
		{
			destination[i] = source[i];
			i++;
		}
	}
	destination[i] = '\0';
	return (destination);
}
