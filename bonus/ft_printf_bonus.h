/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:37:27 by irfei             #+#    #+#             */
/*   Updated: 2025/01/25 15:48:09 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flags
{
	int	hash;
	int	plus;
	int	space;
}		t_flags;

int		ft_printf(const char *format, ...);
int		ft_putchar_bonus(char c);
int		ft_putnbr_bonus(int n, t_flags flags);
int		ft_putstr_bonus(const char *str);
int		ft_putnbr_unsigned_bonus(unsigned int nb);
int		ft_putnbr_hex_bonus(unsigned int nb, t_flags flags);
int		ft_putptr_bonus(unsigned long nb);
int		ft_putpercent_bonus(void);
int		ft_putnbr_hex_upper_bonus(unsigned int nb, t_flags flags);
#endif
