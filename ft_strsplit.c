/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:28:53 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:12:41 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!(str = (char **)malloc(sizeof(char *) * ft_word_count(s, c) + 1)))
		return (NULL);
	while (i < len)
	{
		j = i;
		while (s[i] != c && i < len)
			i++;
		if ((s[j] != c && s[i] == c) || !s[i])
			str[index++] = ft_char_count(s + j, i - j);
		while (s[i] == c && i < len)
			i++;
	}
	str[index] = 0;
	return (str);
}
