/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:46:41 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 16:30:36 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
void f(const char format_char, va_list args, int *char_count)
{
	if (format_char == 'c')
		*char_count += ft_putchar_bonus(va_arg(args, int));
	else if (format_char == 's')
		*char_count += ft_putstr_bonus(va_arg(args, char*));
	else if (format_char == 'd')
		
}