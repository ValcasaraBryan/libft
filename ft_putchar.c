/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:24:19 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 16:24:23 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_(int c)
{
	const void *string;

	string = &c;
	return (write(1, string, 1));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
