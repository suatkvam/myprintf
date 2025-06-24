/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:14:48 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 10:15:31 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthex(unsigned int number, int *len, char *base)
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
