/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:40:11 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 09:27:01 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_B "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_pointer_adress(size_t number, int *len, char *base);
void	ft_helper(void *ptr, int *len);
void	ft_puthex(unsigned int number, int *len, char *base);

#endif
