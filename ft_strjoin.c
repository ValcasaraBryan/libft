/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:27:10 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:06:39 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(s1) * ft_strlen((char *)s1) + 1)))
		return (NULL);
	str = ft_strcat((char *)s1, s2);
	return (str);
}
