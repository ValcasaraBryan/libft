/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 17:30:30 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/13 17:30:32 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd__list(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	if (!*alst)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp = new;
	}
}

void	ft_lstadd__gnl(t_gnl **alst, t_gnl *new)
{
	t_gnl	*tmp;

	tmp = *alst;
	if (!*alst)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp = new;
	}
}