/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 22:46:06 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/23 22:46:07 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

int		main(void)
{
	t_list *list;

	list = ft_lstnew("[salut]\n", 8);
	ft_putstr("1 = ");
	ft_putstr(list->content);
	ft_lstdelone(&list, &ft_del);
	ft_putstr("2 = ");
	ft_putstr(list->content);
	ft_putchar('\n');
	return (0);
}