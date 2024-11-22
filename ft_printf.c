/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:52:15 by irfei             #+#    #+#             */
/*   Updated: 2024/11/22 21:20:44 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f(const char *format, va_list args, int *i, int *char_count)
{
	if (format[*i] == '%')
	{
		(*i)++;
		if (format[*i] == 'c')
			*char_count += ft_putchar(va_arg(args, int));
		else if (format[*i] == 's')
			*char_count += ft_putstr(va_arg(args, char *));
		else if (format[*i] == 'd' || format[*i] == 'i')
			*char_count += ft_putnbr(va_arg(args, int));
		else if (format[*i] == 'u')
			*char_count += ft_putnbr_unsigned(va_arg(args, unsigned int));
		else if (format[*i] == 'x')
			*char_count += ft_putnbr_hex(va_arg(args, unsigned int));
		else if (format[*i] == 'X')
			*char_count += ft_putnbr_hex_upper(va_arg(args, unsigned int));
		else if (format[*i] == 'p')
			*char_count += ft_putstr("0x") + ft_putptr(va_arg(args, void *));
		else if (format[*i] == '%')
			*char_count += ft_putpercent();
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_count;

	i = 0;
	char_count = 0;
	if (!format || write(1, NULL, 0) == -1)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			f(format, args, &i, &char_count);
			i++;
		}
		else
			char_count += ft_putchar(format[i++]);
		va_end(args);
	}
	return (char_count);
}
