/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:53:18 by irfei             #+#    #+#             */
/*   Updated: 2024/11/23 16:22:15 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putptr_bonus(void *ptr)
{
	int char_count;
	char_count = 0;
	if (!ptr)
		return (ft_putstr_bonus("(null)"));
	char_count += ft_putstr_bonus("0x");
	char_count += ft_putnbr_hex_bonus((unsigned long)ptr);
	return (char_count);
}