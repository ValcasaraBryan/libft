/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:48:48 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:10:59 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = -1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s)
		j++;
	if (i == 0)
		return ((char *)s);
	if (!(str = (char *)malloc(sizeof(*s) * (j - i) + 1)))
		return (NULL);
	j = 0;
	i = -1;
	while (s[++i] != '\0')
		if (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
			str[j++] = s[i];
	str[j] = '\0';
	return (str);
}
