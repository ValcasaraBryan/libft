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
	size_t	size;
	void	*str;

	if (!content)
	{
		content_size = 0;
		content = NULL;
	}
	size = content_size;
	if (!(tmp = malloc(sizeof(t_list))))
		return (NULL);
	tmp->next = NULL;
	if (!(str = ft_memalloc(size)))
		return (NULL);
	str = (void *)content;
	tmp->content = str;
	tmp->content_size = size;
	return (tmp);
}

//Alloue (avec malloc(3)) et retourne un maillon “frais”.
// Les champs content et content_size du nouveau maillon 
//sont initialisés par copie des paramètres de la fonction. 
//Si le paramètre content est nul, le champs content est 
///initialisé à NULL et le champs content_size est initialise
// à 0 quelque soit la valeur du paramètre content_size. Le champ
// next est initialisé à NULL. Si l’allocation échoue, la fonction
// renvoie NULL.

//typedef struct		s_list
//{
//	void			*content;
//	size_t			content_size;
//	struct s_list	*next;
//}					t_list;