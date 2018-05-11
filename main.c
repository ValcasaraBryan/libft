/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 16:22:52 by brvalcas          #+#    #+#             */
/*   Updated: 2018/05/09 16:22:53 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	t_list	*new;
	t_list	*list;
	t_list	*list2;
	new = ft_lstnew("salut", 6);
	list = ft_lstnew("bonjour", 7);
	list2 = ft_lstnew("coucou", 6);
	ft_lstadd__list(&new, list);
	ft_lstadd__list(&new, list2);
	ft_print_lst__list(new);
	return (0);
}