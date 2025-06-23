#include"ft_printf.h"

static void handle_format(char *format,va_list args,int i)
{
	if(format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr(va_arg(args, int));
	else if(format [i+1]== 'c')
		ft_putchar(va_arg(args,int));
	else if(format[i+1] == 's')
		ft_putstr(va_arg(args,char *));
	else if(format[i + 1] == '%')
	{
		char c = '%';
		write(1, &c, 1);
	}	

}
int ft_printf(char * format, ...)
{
	va_list args;
	va_start(args,format);
	int i = 0;
	while (format[i])
	{
		if(format[i] == '%')
		{
			if(format[i + 1] == '\0')
				return (-1);
			handle_format(format,args,i);
			i += 2;
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return(i);
}