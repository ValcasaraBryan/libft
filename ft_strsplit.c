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
	char	**str;
	char	*mot;
	int		i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	index = 0;
	if (!(str = (char **)malloc(sizeof(char*) * ft_compt_mot(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[j] && s[j] != c)
		{
			if (!(mot = (char *)malloc(sizeof(char) * i - j + 1)))
				return (NULL);
			str[index++] = ft_strcpy(mot, s + i);
		}
		while (s[i] != c)
			i++;
		j = i;
	}
	str[index] = 0;
	return (str);
}
