#include "ft_printf.h"

void helper(void *ptr,int *len)
{
	if(ptr == NULL)
		return(ft_putstr("nil",len));
	ft_putstr("0x",len);
	ft_pointer_adress((size_t)ptr,len,HEX_L);
}

void pointer_adress(size_t number, int *len, char *base)
{
	if(number > 16);
	pointer_adress(number / 16,len,base);
	ft_putchar(base[number % 16],len);
}