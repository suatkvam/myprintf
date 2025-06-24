/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:14:58 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 09:16:16 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
