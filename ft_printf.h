/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:11:12 by irfei             #+#    #+#             */
/*   Updated: 2024/11/22 21:34:27 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(const char *str);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hex(unsigned int nb);
int	ft_putptr(void *ptr);
int	ft_putpercent(void);
int	ft_putnbr_hex_upper(unsigned int nb);
#endif
