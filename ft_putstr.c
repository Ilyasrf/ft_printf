/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:41:34 by irfei             #+#    #+#             */
/*   Updated: 2024/11/23 17:19:49 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
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
