/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compt_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:25:50 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/09 18:25:52 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_compt_char(char const *s, size_t len)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	dest = ft_memalloc(len + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strncpy(dest, s, len));
}