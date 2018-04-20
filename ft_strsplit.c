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

char	**ft_strsplit(char const *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * ft_compt_mot(s, c) + 1)))
		return (NULL);
	while (i <= (size_t)ft_strlen((char *)s))
	{
		j = i;
		while (s[i] != c && i <= (size_t)ft_strlen((char *)s))
			i++;
		if (s[j] != c && s[i] == c)
			str[index++] = ft_compt_char(s + j, i - j);
		while (s[i] == c && i <= (size_t)ft_strlen((char *)s))
			i++;
	}
	str[index] = 0;
	return (str);
}
