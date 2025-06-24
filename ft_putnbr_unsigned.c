/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:21:47 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 10:15:27 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *len)
{
	if (n >= 10)
		ft_putnbr_unsigned(n / 10, len);
	ft_putchar(((n % 10) + '0'), len);
}
