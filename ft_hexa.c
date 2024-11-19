/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:39:52 by agraille          #+#    #+#             */
/*   Updated: 2024/11/19 12:13:38 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_count_len(unsigned int args)
{

}

void	ft_print_hex(unsigned int args, char *format)
{
	char	*hex_table;

	hex_table = "0123456789abcdef";
	write(1, "0x", 2);

}
