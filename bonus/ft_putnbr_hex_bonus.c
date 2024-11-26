/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:47:44 by irfei             #+#    #+#             */
/*   Updated: 2024/11/26 21:29:37 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_hex_bonus(unsigned int nb, char flag)
{
	int char_count;
	char *hex;
	char_count = 0;
	hex = "0123456789abcdef";
	if (flag == '#')
		char_count += ft_putstr_bonus("0x");
	if (nb >= 16)
		char_count += ft_putnbr_hex_bonus(nb / 16, '\0');
	char_count += ft_putchar_bonus(hex[nb % 16]);
	return (char_count);
}