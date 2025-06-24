/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akivam <akivam@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:15:09 by akivam            #+#    #+#             */
/*   Updated: 2025/06/24 09:15:10 by akivam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s, int *len)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	write(1, s, ft_strlen(s));
	*len += ft_strlen(s);
}
