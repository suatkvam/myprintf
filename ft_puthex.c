#include "printf.h"

void	ft_puthex(unsigned int number, int *len, char *base)
{
		if (number >= 16)
{
			ft_puthex(number / 16, len, base);
		ft_putchar(base[number % 16], len);
}
	else
		ft_putchar(base[number % 16], len);
}
