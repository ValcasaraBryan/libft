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
	size_t	lenght;
	size_t	mot;

	j = 0;
	lenght = 0;
	mot = 0;
	if (!s)
		return (0);
	while (s[lenght] != '\0')
	{
		if (s[lenght] == c)
		{
			j++;
			if (s[j] != c)
				mot++;
		}
		lenght++;
	}
	if (mot == 0)
		return (0);
	if (j < mot)
		return (mot - j);
	return (mot + 1);
}
