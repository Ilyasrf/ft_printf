/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:52:15 by irfei             #+#    #+#             */
/*   Updated: 2024/11/26 12:41:09 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f(const char format_char, va_list args, int *char_count)
{
	if (format_char == 'c')
		*char_count += ft_putchar(va_arg(args, int));
	else if (format_char == 's')
		*char_count += ft_putstr(va_arg(args, char *));
	else if (format_char == 'd' || format_char == 'i')
		*char_count += ft_putnbr(va_arg(args, int));
	else if (format_char == 'u')
		*char_count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format_char == 'x')
		*char_count += ft_putnbr_hex(va_arg(args, unsigned int));
	else if (format_char == 'X')
		*char_count += ft_putnbr_hex_upper(va_arg(args, unsigned int));
	else if (format_char == 'p')
	{
		*char_count += ft_putstr("0x");
		*char_count += ft_putptr(va_arg(args, unsigned long));
	}
	else if (format_char == '%')
		*char_count += ft_putpercent();
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_count;

	i = 0;
	char_count = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			f(format[i], args, &char_count);
		}
		else
			char_count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}
