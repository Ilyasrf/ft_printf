/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:06:03 by irfei             #+#    #+#             */
/*   Updated: 2024/11/21 20:44:29 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_upper(unsigned int nb)
{
	int char_count = 0;
	char *hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		char_count += ft_putnbr_hex_upper(nb / 16);
	}
	char_count += ft_putchar(hex[nb % 16]);
	return char_count;
	
}
// int main()
// {
// 	unsigned int nb = 12346789;
// 	ft_putnbr_hex_upper(nb);
// 	return 0;
// }