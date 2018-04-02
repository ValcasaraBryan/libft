#include "libft.h"

int		ft_putchar_(int c)
{
	const void *string;

	string = &c;
	return (write(1, string, 1));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}