#include "ft_printf.h"

void	ft_putnbr(long int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, len);
	ft_putchar((n % 10) + '0', len);
}