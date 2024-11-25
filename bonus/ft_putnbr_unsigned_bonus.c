/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:32:32 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 15:41:40 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_unsigned_bonus(unsigned int nb)
{
	int	char_count;

	char_count = 0;
	if (nb >= 10)
		char_count += ft_putnbr_unsigned_bonus(nb / 10);
	char_count += ft_putchar_bonus(nb % 10 + '0');
	return (char_count);
}
