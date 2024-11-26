/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:55:29 by irfei             #+#    #+#             */
/*   Updated: 2024/11/26 21:33:00 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_hex_upper_bonus(unsigned int nb, char flag)
{
	int char_count;
	char *hex;
	hex = "0123456789ABCDEF";
	char_count = 0;
	if (flag == '#')
		char_count += ft_putstr_bonus("0X");
	if (nb >= 16)
		char_count += ft_putnbr_hex_upper_bonus(nb / 16, '\0');
	char_count += ft_putchar_bonus(hex[nb % 16]);
	return (char_count);
}