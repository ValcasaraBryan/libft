/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 17:34:11 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/13 17:34:13 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	t_list	*tmp;


//	printf("%p\n", alst);
//	printf("%p\n", tmp);
	tmp = *alst;
//	printf("%p\n", alst);
//	printf("%p\n", tmp);
	del(&tmp->content, tmp->content_size);
	free(&tmp->content);
	tmp->content = NULL;
}