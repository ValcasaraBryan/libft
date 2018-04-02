#include "libft.h"

int		ft_compt_mot(char const *s, char c)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			j++;
	}
	return (j);
}
