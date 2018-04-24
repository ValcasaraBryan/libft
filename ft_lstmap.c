/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 17:34:26 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/13 17:34:28 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	while (lst)
	{
		if (!(tmp = ft_memalloc(sizeof(t_list))))
			return (NULL);
		tmp = f(lst);
		lst = lst->next;
	}
	return (tmp);
}
