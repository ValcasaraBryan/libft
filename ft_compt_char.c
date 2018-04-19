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

	if (!s)
		return (NULL);
	printf("len = %zu\n",len);
	dest = ft_memalloc(len + 1);
	dest = ft_strncpy(dest, s, len);
	printf("dest = [%c], adresse = [%p]\n", dest[0], &dest[0]);
	printf("dest = [%c], adresse = [%p]\n", dest[1], &dest[1]);
	printf("dest = [%c], adresse = [%p]\n", dest[2], &dest[2]);
	printf("dest = [%c], adresse = [%p]\n", dest[3], &dest[3]);
	printf("dest = [%c], adresse = [%p]\n", dest[4], &dest[4]);
	printf("dest = [%c], adresse = [%p]\n", dest[5], &dest[5]);
	printf("dest = [%c], adresse = [%p]\n\n", dest[6], &dest[6]);

	printf("dest               = [%p]\n", dest);
	return (dest);
}
