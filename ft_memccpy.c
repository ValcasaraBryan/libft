#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			str;
	unsigned int	i;
	char			*destination;
	char			*source;

	destination = (char *)dst;
	source = (char *)src;
	str = (char)c;
	i = 0;
	if (n == 0)
		return (destination);
	while (i < n && source[i] != str)
	{
		destination[i] = source[i];
		i++;
	}
	if (source[i] == str && i < n)
		destination[i] = source[i];	
	return (destination);
}