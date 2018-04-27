/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 03:40:39 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/27 03:40:42 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char_count(char const *s, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (!(dest = ft_memalloc(len + 1)))
		return (NULL);
	return (ft_strncpy(dest, s, len));
}
