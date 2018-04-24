/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:16:07 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 18:28:02 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	
int		main(int argc, char **argv)
{
	ft_putstr("strnstr    = [");
	ft_putstr(strnstr("Bonjour je m'appelle clara et bryan","clara", ft_strlen("Bonjour je m'appelle clara et bryan")));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("ft_strnstr = [");
	ft_putstr(ft_strnstr("Bonjour je m'appelle clara et bryan","clara", ft_strlen("Bonjour je m'appelle clara et bryan")));
	ft_putchar(']');
	ft_putchar('\n');
	return (0);
}