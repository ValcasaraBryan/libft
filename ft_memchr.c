#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*source;
	char			*destination;
	char			string;
	unsigned int	i;

	i = 0;
	source = (char *)s;
	string = (char)c;
	while (i < n)
	{
		if (source[i] == string)
			return (destination = &source[i]);
		i++;
	}
	return (NULL);
}