#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int j;
	char *str;
	char d;

	i = 0;
	j = 0;
	str = (char *)s;
	d = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == d)
			j = i;
		if (str[i] == '\0' && d != '\0')
			return (NULL);
		i++;
	}
	return (&str[j]);
}