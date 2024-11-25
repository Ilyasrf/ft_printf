/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:01:23 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 12:14:07 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putstr_bonus(const char *str)
{
	int	char_count;

	char_count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		char_count += write(1, str, 1);
		str++;
	}
	return (char_count);
}
