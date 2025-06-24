/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:40:04 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 17:50:01 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)(str[i]) == (unsigned char)c)
			return (str + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (str + i);
	return (NULL);
}
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
	else if (format[i + 1] == 'p')
		ft_helper(va_arg(args, void *), len);
	else if (format[i + 1] == 'x')
		ft_puthex(va_arg(args, unsigned int), len, HEX_L);
	else if (format[i + 1] == 'X')
		ft_puthex(va_arg(args, unsigned int), len, HEX_B);
	else
		ft_putchar(format[i + 1], len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if(!format[i + 1])
				return -1;
			if(ft_strchr("cspdiuxX%",format[i + 1]))
			{
				handle_format(format, args, i, &len);
				i += 1;
			}
			i++;
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
