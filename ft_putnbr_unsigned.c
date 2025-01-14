/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:42:35 by irfei             #+#    #+#             */
/*   Updated: 2025/01/14 19:41:22 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	char_count;

	char_count = 0;
	if (nb >= 10)
		char_count += ft_putnbr_unsigned(nb / 10);
	char_count += ft_putchar(nb % 10 + '0');
	return (char_count);
}
