/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:27:25 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 16:27:26 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlen_(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
