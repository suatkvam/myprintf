/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_adress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:39:44 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 10:15:10 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_pointer_adress(size_t number, int *len, char *base)
{
	if (number >= 16)
		ft_pointer_adress(number / 16, len, base);
	ft_putchar(base[number % 16], len);
}

void	ft_helper(void *ptr, int *len)
{
	if (ptr == NULL)
		return (ft_putstr("(nil)", len));
	ft_putstr("0x", len);
	ft_pointer_adress((size_t)ptr, len, HEX_L);
}
