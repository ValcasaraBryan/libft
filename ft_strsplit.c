/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:28:53 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 17:12:41 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	//(char **)ft_memalloc(ft_compt_mot(s, c) + 1))
	//(char **)malloc(sizeof (char *) * ft_compt_mot(s, c) + 1)
	if (!(str = (char **)malloc(sizeof (char *) * ft_compt_mot(s, c) + 1)))
		return (NULL);
	printf("ft_compt_mot = [%zu]\n", ft_compt_mot(s, c) + 1);
	while (i <= (size_t)ft_strlen((char *)s))
	{
		j = i;
		while (s[i] != c && i <= (size_t)ft_strlen((char *)s))
		{
			i++;
		}
		if (s[j] != c && s[i] == c)
		{
			printf("index = %zu\n", index);
			printf("i - j = %zu\n", i - j);
			str[index] = ft_compt_char(s + j, i - j);
			printf("str = [%c], adresse = [%p]\n", str[index][0], &str[index][0]);
			printf("strlen = [%zu]\n", ft_strlen((char *)str[index]));
			index++;
		}
		//printf("index - 1 = %zu\n", index - 1);
		//printf("str = [%s]\n", str[index - 1]);
		while (s[i] == c && i <= (size_t)ft_strlen((char *)s))
		{
			i++;
		}
	}
	str[index] = 0;
	printf("\n");
	printf("index = %zu\n", index);
	printf("\nstr = [%c], adresse = [%p]\n", str[0][0], &str[0][0]);
	printf("str = [%c], adresse = [%p]\n", str[0][1], &str[0][1]);
	printf("str = [%c], adresse = [%p]\n", str[0][2], &str[0][2]);
	printf("str = [%c], adresse = [%p]\n", str[0][3], &str[0][3]);
	printf("str = [%c], adresse = [%p]\n", str[0][4], &str[0][4]);
	printf("str = [%c], adresse = [%p]\n\n", str[0][5], &str[0][5]);

	printf("str = [%c], adresse = [%p]\n", str[1][0], &str[1][0]);
	printf("str = [%c], adresse = [%p]\n", str[1][1], &str[1][1]);
	printf("str = [%c], adresse = [%p]\n", str[1][2], &str[1][2]);
	printf("str = [%c], adresse = [%p]\n\n", str[1][3], &str[1][3]);

	printf("str = [%c], adresse = [%p]\n", str[2][0], &str[2][0]);
	printf("str = [%c], adresse = [%p]\n", str[2][1], &str[2][1]);
	printf("str = [%c], adresse = [%p]\n", str[2][2], &str[2][2]);
	printf("str = [%c], adresse = [%p]\n", str[2][3], &str[2][3]);
	printf("str = [%c], adresse = [%p]\n", str[2][4], &str[2][4]);
	printf("str = [%c], adresse = [%p]\n", str[2][5], &str[2][5]);
	printf("str = [%c], adresse = [%p]\n\n", str[2][6], &str[2][6]);

	return (str);
}
