/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:39:52 by agraille          #+#    #+#             */
/*   Updated: 2024/11/20 15:32:49 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex(unsigned int args, const char *format)
{
	char			*hex_lowercase;
	char			*hex_uppercase;
	int				len;
	int				i;
	char			buffer[42];

	i = 0;
	len = 0;
	hex_lowercase = "0123456789abcdef";
	hex_uppercase = "0123456789ABCDEF";
	while (args > 0)
	{
		if (*format == 'X')
			ft_putchar(hex_uppercase[args % 16]);
		else if (*format == 'x')
			buffer[i] = hex_lowercase[args % 16];
		args = args / 16;
		len++;
		i++;
		printf("I est de : %d\n",i);
	}
	while (i)
	{
		ft_putchar(buffer[i]);
		i--;
	}
	return (len);
}
