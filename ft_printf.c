#include "ft_printf.h"

static void	handle_format(const char *format, va_list args, int i, int *len)
{
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format[i + 1] == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), len);
	else if (format[i + 1] == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (format[i + 1] == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format[i + 1] == '%')
		ft_putchar('%', len);
	else if(format[i + 1] == 'p')
		ft_helper(va_arg(args,void *),len);
	else if(format[i + 1] == 'X')
		;
	else if(format[i + 1] == 'x')
		;

}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i = 0;
	int		len = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			handle_format(format, args, i, &len);
			i += 2;
		}
		else
		{
			ft_putchar(format[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}