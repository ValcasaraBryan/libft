#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 			*str;
	unsigned int	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}