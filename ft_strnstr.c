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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
<<<<<<< HEAD
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i <= len)
	{
=======
	s = (char *)needle;
	find = (char *)haystack;
	if (s[0] == '\0')
		return (find);
	while (len--)
>>>>>>> f20fb0355ddf2ee8ee4d6da25913319f14f5949e
		if (needle[j] != haystack[i + j])
		{
			j = 0;
			i++;
		}
		else if (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
<<<<<<< HEAD
	}
=======
>>>>>>> f20fb0355ddf2ee8ee4d6da25913319f14f5949e
	return (NULL);
}