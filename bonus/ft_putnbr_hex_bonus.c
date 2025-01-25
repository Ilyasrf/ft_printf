/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:47:44 by irfei             #+#    #+#             */
/*   Updated: 2025/01/25 15:48:34 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_putnbr_hex_recursive(unsigned int nb, const char *hex)
{
	int	char_count;

	char_count = 0;
	if (nb >= 16)
		char_count += ft_putnbr_hex_recursive(nb / 16, hex);
	char_count += ft_putchar_bonus(hex[nb % 16]);
	return (char_count);
}

int	ft_putnbr_hex_bonus(unsigned int nb, t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.hash && nb != 0)
		char_count += ft_putstr_bonus("0x");
	char_count += ft_putnbr_hex_recursive(nb, "0123456789abcdef");
	return (char_count);
}
