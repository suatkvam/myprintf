/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:14:48 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 09:14:49 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int number, int *len, char *base)
{
	int	tmp;
	int	byte;

	if (number < 0)
	{
		byte = 4;
		while (byte--)
		{
			tmp = *(((unsigned char *)(&number) + byte));
			ft_putchar(base[(tmp / 16) % 16], len);
			ft_putchar(base[tmp % 16], len);
		}
	}
	else
	{
		if (number >= 16)
		{
			if (number >= 16)
				ft_puthex(number / 16, len, base);
			ft_putchar(base[number % 16], len);
		}
		else
			ft_putchar(base[number % 16], len);
	}
}
