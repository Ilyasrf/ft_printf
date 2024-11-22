/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:20:18 by irfei             #+#    #+#             */
/*   Updated: 2024/11/21 21:33:46 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_putnbr(int nb)
{
	int char_count = 0;
	
	if (nb == -2147483648)
	{
		char_count += ft_putstr("-2147483648");
		return char_count;
	}
	if (nb < 0)
	{
		char_count += ft_putchar('-');
		nb = -nb;
		
	}
	if (nb >= 10)
	{
		char_count += ft_putnbr(nb / 10);
		
	}
	char_count += ft_putchar(nb % 10 + '0');
	return char_count;
	
}
// int main()
// {
// 	int nb = 12346789;
// 	ft_putnbr(nb);
// 	return 0;
	
// }