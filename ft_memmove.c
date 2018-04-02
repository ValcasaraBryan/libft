#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*destination;
	char				*source;
	unsigned int		i;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	while (i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}