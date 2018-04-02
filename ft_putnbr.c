#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == (-2147483648))
		{
			nb = (-nb) - 1;
			ft_putnbr(nb / 10);
			ft_putchar('8');
		}
		else if (nb < (-9))
		{
			ft_putnbr(-nb / 10);
			ft_putchar(-nb % 10 + '0');
		}
		else
			ft_putchar(-nb + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}