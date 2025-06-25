#include "printf.h"

void	ft_putnbr(int n, int *len)
{
	long	number;

	number = n;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-', len);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr(number / 10, len);
	ft_putchar((number % 10) + '0', len);
}
