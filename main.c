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
#include <stdio.h>

static	void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

int		main(void)
{
	t_list *list;
	t_list *list2;
	t_list *list3;
	t_list *list4;
	t_list *add;

	add = NULL;
	list = ft_lstnew("lorem", sizeof("lorem"));
	list2 = ft_lstnew("ipsum", sizeof("ipsum"));
	list3 = ft_lstnew("dolor", sizeof("dolor"));
	list4 = ft_lstnew("sit", sizeof("sit"));
	ft_putstr(list4->content);
	ft_putchar('\n');
	printf("list4->content = [%p]\n", list4);
	list4->next = NULL;
	printf("list4->next    = [%p]\n", list4->next);
	ft_putchar('\n');
	ft_putstr(list3->content);
	ft_putchar('\n');
	printf("list3->content = [%p]\n", list3);
	list3->next = list4;
	printf("list3->next    = [%p]\n", list3->next);
	ft_putchar('\n');
	ft_putstr(list2->content);
	ft_putchar('\n');
	printf("list2->content = [%p]\n", list2);
	list2->next = list3;
	printf("list2->next    = [%p]\n", list2->next);
	ft_putchar('\n');
	ft_putstr(list->content);
	ft_putchar('\n');
	printf("list->content  = [%p]\n", list);
	list->next = list2;
	printf("list->next     = [%p]\n", list->next);
	ft_putchar('\n');
	printf("list4->next    = [%p]\n", list4->next);
	ft_putchar('\n');
	ft_lstadd(&add, list4);

	printf("list4->content = [%p]\n", list4);
	printf("list4->next    = [%p]\n", list4->next);
	return (0);
}