/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:47:44 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 15:44:09 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	putnbr_hex_bonus(unsigned int nb)
{
	int char_count;
	char *hex;
	char_count = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
		char_count += ft_putnbr_hex_bonus(nb / 16);
	char_count += ft_putnbr_hex_bonus(nb % 16 + '0');
	return (char_count);
}