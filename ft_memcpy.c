#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*destination;
	char			*source;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	if (n == 0)
		return (destination);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}