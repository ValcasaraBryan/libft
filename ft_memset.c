#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			valeur;
	char			*tab;

	i  = 0;
	valeur = (char)c;
	tab = (char *)b;
	while (i < len)
		tab[i++] = valeur;
	return (tab);
}