/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:27:33 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 16:27:34 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;

	i = ft_strlen_((char *)s);
	if (!(str = (char *)malloc(sizeof(*s) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		str[i++] = f((char)s);
	return (str);
}
