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
	unsigned int	i;
	unsigned int	j;
	char			*s;
	char			*find;

	i = 0;
	j = 0;
	s = (char *)str;
	find = (char *)to_find;
	if (find[0] == '\0')
		return (s);
	while (i < len - 1)
		if (find[j] != s[i + j])
		{
			j = 0;
			i++;
		}
		else if (find[j] == s[i + j])
		{
			j++;
			if (find[j] == '\0')
				return (&s[i]);
		}
	return (NULL);
}
