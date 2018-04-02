#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = ft_strlen_((char *)s);
	if (!(str = (char *)malloc(sizeof(*s) * i + 1)))
		return (NULL);
	i = -1;
	while (s[i++] != '\0')
		str[i] = f(i, s[i]);
	return (str);
}