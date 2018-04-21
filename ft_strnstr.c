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
	char	*s;
	char	*find;

	index_str = 0;
	index_find = 0;
	s = (char *)str;
	find = (char *)to_find;
	if (find[0] == '\0')
		return (s);
//	printf("char[13] = [%c]\n", str[13]);
//	printf("char[14] = [%c]\n", str[14]);
//	printf("char[15] = [%c]\n", str[15]);
	while (index_str < len)
	{
		if (s[index_find] != find[index_find + index_str])
		{
			index_find = 0;
			index_str++;
		}
		else if (s[index_find] == find[index_str + index_find])
		{
			index_find++;
		}
		if (find[index_find] == '\0')
			return (&s[index_str]);
//		printf("index_str = [%zu]\n", index_str);
//		printf("index_find = [%zu]\n", index_find);
	}
	return (NULL);
}
