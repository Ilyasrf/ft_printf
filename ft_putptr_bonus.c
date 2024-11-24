/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:53:18 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 12:14:13 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putptr_bonus(unsigned long nb)
{
	int		char_count;
	char	*hex;

	char_count = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
		char_count += ft_putptr_bonus(nb / 16);
	char_count += ft_putchar_bonus(hex[nb % 16]);
	return (char_count);
}
