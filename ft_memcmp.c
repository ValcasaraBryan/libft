#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*string_1;
	char			*string_2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	string_1 = (char *)s1;
	string_2 = (char *)s2;
	while (i < n)
	{
		if (string_1[i] != string_2[i])
			return (j = string_1[i] - string_2[i]);
		i++;
	}
	return (0);
}