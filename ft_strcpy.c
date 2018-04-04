/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 17:05:54 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:06:13 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	int j;

	i = ft_strlen((char *)src);
	j = 0;
	while (j <= (i + 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
