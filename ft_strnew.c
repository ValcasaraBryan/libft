#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int 	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(*str) * size + 1)))
		return (NULL);
	while (i < size)
		str[i++] = '\0';
	return (str);
}