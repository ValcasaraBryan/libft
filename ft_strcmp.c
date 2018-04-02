/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:32:53 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/13 15:26:11 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*dest;
	char	*src;

	i = 0;
	j = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (dest[i])
	{
		if (dest[i] != src[i])
			return (j = dest[i] - src[i]);
		else if (src[i] == '\0')
			return (j = dest[i]);
		i++;
	}
	return (0);
}
