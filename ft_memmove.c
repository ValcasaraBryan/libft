/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:24:00 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 16:24:01 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*destination;
	char				*source;
	unsigned int		i;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	while (i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
