/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:46:41 by irfei             #+#    #+#             */
/*   Updated: 2024/11/25 21:45:17 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
void f(const char format_char, va_list args, int *char_count)
{
	if (format_char == 'c')
		*char_count += ft_putchar_bonus(va_arg(args, int));
	else if (format_char == 's')
		*char_count += ft_putstr_bonus(va_arg(args, char*));
	else if (format_char == 'd' || format_char == 'i')
		*char_count += ft_putnbr_bonus(va_arg(args, int));
	else if (format_char == 'x')
		*char_count += ft_putnbr_hex_bonus(va_arg(args, unsigned int));
	else if (format_char == 'X')
		*char_count += ft_putnbr_hex_upper_bonus(va_arg(args, unsigned int));
	else if (format_char == 'p')
	{
		*char_count += ft_putstr_bonus("0x");
		*char_count += ft_putptr_bonus(va_arg(args, unsigned long));
	}
	else if (format_char == 'u')
		*char_count += ft_putnbr_unsigned_bonus(va_arg(args, unsigned int));
	else if (format_char == '%')
		*char_count += ft_putpercent_bonus();
}
int ft_printf(const char *format, ...)
{
	va_list args;
	int char_count;
	int i;
	char_count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			
			f(format[i], args, &char_count);
		}
		else
			char_count += ft_putchar_bonus(format[i]);
		i++;
		
	}
	va_end (args);
	return (char_count);
}