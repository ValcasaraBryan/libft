/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:28:30 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:14:43 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	index_str;
	size_t	index_find;
	char			*s;
	char			*find;

	index_str = 0;
	index_find = 0;
	s = (char *)str;
	find = (char *)to_find;
	if (find[0] == '\0')
		return (s);
	while (index_str < len)
	{
		if (s[index_str] == find[index_find])
			index_find++;
		else
			index_find = 0;
		if (find[index_find] == '\0')
			return (&s[index_str]);
		if (s[index_str] != find[index_find])
			index_str++;
	}
	return (NULL);
}
