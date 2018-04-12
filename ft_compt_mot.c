/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compt_mot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:21:43 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 16:21:45 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_compt_mot(char const *s, char c)
{
	size_t	j;
	size_t	index;

	j = 0;
	index = 0;
	if (!s)
		return (0);
	while (s[j] != '\0')
	{
		if (s[j] != c)
			if (s[j + 1] == c || s[j + 1] == '\0')
				index++;
		j++;
	}
	return (j);
}
