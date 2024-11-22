/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:10 by irfei             #+#    #+#             */
/*   Updated: 2024/11/21 21:36:25 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_putptr(void *ptr)
{
	int char_count = 0;
	unsigned long nb = (unsigned long)ptr;
	char_count += ft_putstr("0x");
	char_count += ft_putnbr_hex_upper(nb);
	return char_count;	
}