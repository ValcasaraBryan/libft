#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!(str = (void *)malloc(sizeof(void) * size + 1)))
		return (NULL);
	return (str);
}