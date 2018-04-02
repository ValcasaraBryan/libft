/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 19:48:00 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/18 01:03:40 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*dest;
	char			*src;

	i = 0;
	j = 0;
	dest = s1;
	src = (char *)s2;
	while (dest[j] != '\0')
		j++;
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
