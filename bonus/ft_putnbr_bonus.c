/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:27:51 by irfei             #+#    #+#             */
/*   Updated: 2024/11/25 22:40:39 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_bonus(int nb, char flag)
{
	int char_count;
	char_count = 0;
	if (flag == ' ' && nb >= 0)
		char_count += ft_putchar_bonus(' ');
	if (flag == '+' && nb >= 0)
		char_count += ft_putchar_bonus('+');
	if (nb == -2147483648)
	{
		char_count += ft_putstr_bonus("-2147483648");
		return (char_count);
	}
	if (nb < 0)
	{
		char_count += ft_putchar_bonus('-');
		nb = -nb;
	}

	if (nb >= 10)
		char_count += ft_putnbr_bonus(nb / 10, '\0');
	char_count += ft_putchar_bonus(nb % 10 + '0');
	return (char_count);
}
