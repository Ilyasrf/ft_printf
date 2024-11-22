/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:41:34 by irfei             #+#    #+#             */
/*   Updated: 2024/11/21 21:33:39 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putstr(const char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return i;
}
// int main()
// {
// 	char srt[] = "iwaywa";
// 	ft_putstr(srt);

// }