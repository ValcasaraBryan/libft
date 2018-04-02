#include "libft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlen_(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}