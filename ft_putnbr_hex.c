/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:46:00 by irfei             #+#    #+#             */
/*   Updated: 2025/01/14 19:41:20 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb)
{
	int		char_count;
	char	*hex;

	hex = "0123456789abcdef";
	char_count = 0;
	if (nb >= 16)
		char_count += ft_putnbr_hex(nb / 16);
	char_count += ft_putchar(hex[nb % 16]);
	return (char_count);
}
