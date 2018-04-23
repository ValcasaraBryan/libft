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
	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "", 10));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');
	
	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');


	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');
	
	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "dol", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "dol", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "sit", 10));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("ft_strnstr = ");
	ft_putchar('[');
	ft_putstr(ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putstr("strnstr    = ");
	ft_putchar('[');
	ft_putstr(strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	ft_putchar(']');
	ft_putchar('\n');
	ft_putchar('\n');






	
	return (0);
}