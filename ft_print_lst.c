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
	t_gnl *head;

	if (list)
	{
		head = list;
		ft_putchar('\n');
		ft_putstr("======================================");
		ft_putchar('\n');
		ft_putstr("fd = [");
		ft_putnbr(list->multi_fd);
		ft_putchar(']');
		ft_putchar('\n');
		ft_putchar('\n');
		printf("t_gnl->[%p]", list);
		while (list->next)
		{
			printf("->[%p]", list->next);
			list = list->next;
		}
		printf("->[%p]\n", list->next);
		list = head;
		ft_putstr("fd =         ");
		while (list)
		{
			ft_putchar('[');
			ft_putnbr(list->multi_fd);
			ft_putchar(']');
			ft_putstr("                ");
			list = list->next;
		}
		list = head;
		ft_putchar('\n');
		ft_print_lst__list(list->l_str);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr("======================================");
		ft_putchar('\n');
		list = list->next;
		return (0);
	}
	ft_putstr("\n--- Aucun Maillon ---\n");
	return (-1);
}

int		ft_print_lst__list(t_list *list)
{
	t_list *head;

	if (list)
	{
		head = list;
		printf("t_list->[%p]", list);
		while (list->next)
		{
			printf("->[%p]", list->next);
			list = list->next;
		}
		printf("->[%p]\n            ", list->next);
		list = head;
		while (list)
		{
			printf("[%s]          ", (char *)list->content);
			list = list->next;
		}
		printf("\n");
		list = head;
		return (0);
	}
	ft_putstr("\n--- Aucun Maillon ---\n");
	return (-1);
}