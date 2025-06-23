#include "ft_printf.h"

void ft_puthex(int number, int *len,char *base)
{
	int tmp;
	int byte;

	if (number < 0)
	{
		byte = 4;
		while (byte--)
		{
			tmp = *(((unsigned char *)(&number) + byte));
			ft_putchar(base[(tmp / 16)% 16], len);
			ft_putchar(base[tmp % 16],len);
		}
	}
	else
		{
			if(number >=16)
			{
				if (number >= 16)
				ft_puthex(number / 16, len, base);
				ft_putchar(base[number % 16], len);
			}
			else
			ft_putchar(base[number % 16],len);
		}
	}
