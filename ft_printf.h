#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);
void	ft_putnbr(int n);
void	ft_unsigned_putnbr( unsigned int n);
void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s);


#endif FT_PRINTF_H