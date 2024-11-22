/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:10 by irfei             #+#    #+#             */
/*   Updated: 2024/11/22 21:22:12 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int				char_count;
	int				index;

	char_count = 0;
	nb = (unsigned long)ptr;
	if (nb >= 16)
		char_count += ft_putptr((void *)(nb / 16));
	index = nb % 16;
	char_count += ft_putchar("0123456789abcdef"[index]);
	return (char_count);
}
