/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 17:30:23 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/13 17:30:26 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = malloc(sizeof(t_list))))
		return (NULL);
	tmp->next = NULL;
	if (content)
	{
		tmp->content = ft_memalloc(content_size + 1);
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
		return (tmp);
	}
	tmp->content = NULL;
	tmp->content_size = 0;
	return (tmp);
}
