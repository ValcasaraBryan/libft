#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;

	i = ft_strlen_((char *)s);
	if (!(str = (char *)malloc(sizeof(*s) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		str[i++] = f((char)s);
	return (str);
}