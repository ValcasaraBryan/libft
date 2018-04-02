#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(s1) * ft_strlen((char *)s1) + 1)))
		return (NULL);
	str = ft_strcat((char *)s1, s2);
	return (str);
}