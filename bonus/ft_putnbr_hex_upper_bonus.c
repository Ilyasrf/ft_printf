/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:55:29 by irfei             #+#    #+#             */
/*   Updated: 2024/11/23 15:51:08 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_hex_upper_bonus(unsigned int nb)
{
	int char_count;
	char *hex;
	hex = "0123456789abcdef";
	char_count = 0;
	if (nb > 16)
		char_count += ft_putnbr_hex_upper_bonus(nb / 16);
	char_count += ft_putnbr_hex_upper_bonus(nb % 16);
	return (char_count);
}