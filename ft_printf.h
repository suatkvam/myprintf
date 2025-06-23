#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

# define HEX_B "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_pointer_adress(size_t number, int *len, char *base);
void	ft_helper(void *ptr, int *len);
void	ft_puthex(int number, int *len, char *base);

#endif