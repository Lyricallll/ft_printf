/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:19:46 by agraille          #+#    #+#             */
/*   Updated: 2024/11/15 14:09:49 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>

int		ft_printstr(char *str);
int		ft_args_is_valid(const char *format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_printnbr(int n);
int		ft_putchar(int c);
void	ft_putstr(char *str);



#endif
