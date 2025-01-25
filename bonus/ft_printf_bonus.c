/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:46:41 by irfei             #+#    #+#             */
/*   Updated: 2025/01/25 15:48:05 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	init_flags(t_flags *flags)
{
	flags->hash = 0;
	flags->plus = 0;
	flags->space = 0;
}

static void	parse_flags(const char **format, t_flags *flags)
{
	while (**format == '+' || **format == ' ' || **format == '#')
	{
		if (**format == '+')
			flags->plus = 1;
		else if (**format == ' ')
			flags->space = 1;
		else if (**format == '#')
			flags->hash = 1;
		(*format)++;
	}
}

static int	handle_conversion(const char **format, va_list args, t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (**format == 'c')
		char_count += ft_putchar_bonus(va_arg(args, int));
	else if (**format == 's')
		char_count += ft_putstr_bonus(va_arg(args, char *));
	else if (**format == 'd' || **format == 'i')
		char_count += ft_putnbr_bonus(va_arg(args, int), flags);
	else if (**format == 'x')
		char_count += ft_putnbr_hex_bonus(va_arg(args, unsigned int), flags);
	else if (**format == 'X')
		char_count += ft_putnbr_hex_upper_bonus(va_arg(args, unsigned int),
				flags);
	else if (**format == 'p')
	{
		char_count += ft_putstr_bonus("0x");
		char_count += ft_putptr_bonus(va_arg(args, unsigned long));
	}
	else if (**format == 'u')
		char_count += ft_putnbr_unsigned_bonus(va_arg(args, unsigned int));
	else if (**format == '%')
		char_count += ft_putpercent_bonus();
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;
	t_flags	flags;

	char_count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			init_flags(&flags);
			parse_flags(&format, &flags);
			char_count += handle_conversion(&format, args, flags);
		}
		else
			char_count += ft_putchar_bonus(*format);
		format++;
	}
	va_end(args);
	return (char_count);
}
