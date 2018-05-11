/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 03:07:31 by brvalcas          #+#    #+#             */
/*   Updated: 2018/05/11 03:07:33 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	d;

	i = 0;
	j = ft_strlen(s);
	str = (char *)s;
	d = (char)c;
	while (i <= j)
	{
		if (str[i] == d)
			return (i );
		i++;
	}
	return (i);
}
