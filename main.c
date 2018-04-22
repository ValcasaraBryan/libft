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
	ft_putchar('[');
	ft_putstr(ft_strnstr("FF","see FF your FF return FF now FF", ft_strlen("see FF your FF return FF now FF")));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('[');
	ft_putstr(strnstr("FF","see FF your FF return FF now FF", ft_strlen("see FF your FF return FF now FF")));
	ft_putchar(']');
	ft_putchar('\n');
	return (0);
}