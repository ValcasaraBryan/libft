#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *str;
	char d;

	i = 0;
	str = (char *)s;
	d = (char)c;
	while (str[i] != d || str[i] == '\0')
	{
		if (str[i] == '\0' && d != '\0')
			return (NULL);
		i++;
	}
	return (&str[i]);
}