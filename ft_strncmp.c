/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:22:21 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/13 15:31:02 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (j = s1[i] - s2[i]);
		else if (s2[i] == '\0')
			return (j = s1[i]);
		i++;
	}
	return (0);
}
