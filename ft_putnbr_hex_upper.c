/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:06:03 by irfei             #+#    #+#             */
/*   Updated: 2024/11/22 21:21:21 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_upper(unsigned int nb)
{
	int		char_count;
	char	*hex;

	char_count = 0;
	hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		char_count += ft_putnbr_hex_upper(nb / 16);
	}
	char_count += ft_putchar(hex[nb % 16]);
	return (char_count);
}
