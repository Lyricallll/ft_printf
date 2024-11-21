/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:19:46 by agraille          #+#    #+#             */
/*   Updated: 2024/11/21 15:14:18 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printstr(char *str);
int		ft_args_is_valid(const char *format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_printnbr(int n);
int		ft_putchar(int c);
int		ft_print_hex(unsigned int args, const char *format);
char	*ft_itoa(int n);
void	ft_putstr(char *str);

#endif