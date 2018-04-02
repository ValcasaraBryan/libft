/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 20:15:49 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/19 16:01:08 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_init;
	unsigned int	dest_init;

	i = 0;
	j = 0;
	src_init = ft_strlen_((char *)src);
	dest_init = ft_strlen_((char *)dest);
	while (dest[j] != '\0')
		j++;
	while ((i != dest_init && dest_init >= dstsize)
			|| (i < (dstsize - 1) && dest_init < dstsize))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dstsize > dest_init)
		return (src_init + dest_init);
	if (dstsize >= 1)
		return (src_init + dstsize);
	return (src_init);
}
