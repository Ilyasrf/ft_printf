/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:10 by irfei             #+#    #+#             */
/*   Updated: 2024/11/24 14:38:57 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nb)
{
	char	*hex;
	int		char_count;

	hex = "0123456789abcdef";
	char_count = 0;
	if (nb >= 16)
		char_count += ft_putptr(nb / 16);
	char_count += ft_putchar(hex[nb % 16]);
	return (char_count);
}
