/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 16:19:05 by brvalcas          #+#    #+#             */
/*   Updated: 2018/05/09 16:19:07 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_print_lst__gnl(t_gnl *list)
{
	if (list)
	{
		while (list)
		{
			ft_putstr("str = [");
			ft_putstr(list->str);
			ft_putchar(']');
			ft_putchar('\n');
			ft_putstr("i   = [");
			ft_putnbr(list->i);
			ft_putchar(']');
			ft_putchar('\n');
			ft_putstr("fd  = [");
			ft_putnbr(list->multi_fd);
			ft_putchar(']');
			ft_putchar('\n');
			ft_putstr("ret = [");
			ft_putnbr(list->ret);
			ft_putchar(']');
			ft_putchar('\n');
			ft_putchar('\n');
			list = list->next;
		}
		return (0);
	}
	ft_putstr("\n--- Aucun Maillon ---\n");
	return (-1);
}

int		ft_print_lst__list(t_list *list)
{
	if (list)
	{
		while (list)
		{
			ft_putstr("str = [");
			ft_putstr(list->content);
			ft_putstr("] [");
			ft_putnbr(list->content_size);
			ft_putstr("]\n");
			list = list->next;
		}
		return (0);
	}
	ft_putstr("\n--- Aucun Maillon ---\n");
	return (-1);
}