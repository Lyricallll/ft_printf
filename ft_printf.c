/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:46:22 by agraille          #+#    #+#             */
/*   Updated: 2024/11/20 12:33:07 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_args_is_valid(const char *format, va_list args)
{
	size_t	len_print;

	len_print = 0;
	format++;
	if (*format == 'c')
		len_print += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		len_print += ft_printstr(va_arg(args, char *));
	// else if (*format == 'p')
	// 	len_print += ft_print_ptr(va_arg(args, unsigned long long));
	else if (*format == 'd' || *format == 'i')
		len_print += ft_printnbr(va_arg(args, int));
	// else if (*format == 'u')
	// 	len_print += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		len_print += ft_print_hex(va_arg(args, unsigned int), format);
	else if (*format == '%')
	{
		write(1, "%", 1);
		len_print++;
	}
	return (len_print);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	size_t			total_printed;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			total_printed = ft_args_is_valid(format, args);
			format ++;
		}
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return (total_printed);
}

int	main(void)
{
	// char	*str = NULL;

	// printf("VRAI FONCTION = %d\n",4);
	// ft_printf("  MA FONCTION = %d\n",4);
	// printf("---------------------------------------\n");
	// printf("VRAI FONCTION = %d VRAI FONCTION =  %d\n",4,2);
	// ft_printf("  MA FONCTION = %d et le numero 3 est %d\n",4,2);
	// printf("---------------------------------------\n");
	// printf("VRAI FONCTION = %s\n","");
	// ft_printf("  MA FONCTION = %s\n","");
	// printf("---------------------------------------\n");
	// printf("VRAI FONCTION = %s\n",str);
	// ft_printf("  MA FONCTION = %s\n",str);
	// printf("---------------------------------------\n");
	// printf("VRAI FONCTION = %%\n");
	// ft_printf("  MA FONCTION = %%\n");
	// printf("---------------------------------------\n");
	// printf("VRAI FONCTION = %c\n",'A');
	// ft_printf("  MA FONCTION = %c\n",'A');
	printf("---------------------------------------\n");
	printf("VRAI FONCTION = %x\n",987532154);
	ft_printf("  MA FONCTION = %x\n",987532154);
	printf("---------------------------------------\n");
	printf("VRAI FONCTION = %X\n",987532154);
	ft_printf("  MA FONCTION = %X\n",987532154);
}
