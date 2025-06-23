/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sora <sora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:55:22 by akivam            #+#    #+#             */
/*   Updated: 2025/06/23 15:42:37 by sora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	unsigned_ft_putnbr( unsigned int n)
{
	if (n == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0', 1);
}
int main(int argc, char const *argv[])
{
	ft_putnbr(-2147483648);
	return 0;
}
