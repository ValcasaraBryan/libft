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
	char	*s;
	char	*find;

	i= 0;
	j = 0;
	s = (char *)needle;
	find = (char *)haystack;
	if (find[0] == '\0')
		return (s);
	while (j <= len)
	{
		while (s[j] == find[i + j])
		{
			printf("find[%zu]", j);
			printf("[%c]\n", find[j]);
			i++;
			if (find[j] == '\0')
				return (&find[i]);
		}
		printf("str[%zu]\n", i);
		i = 0;
		j++;
	}
	return (NULL);
}
