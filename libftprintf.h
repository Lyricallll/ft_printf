/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:19:46 by agraille          #+#    #+#             */
/*   Updated: 2024/11/19 11:43:37 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printstr(char *str);
int		ft_args_is_valid(const char *format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_printnbr(int n);
int		ft_putchar(int c);
char	*ft_itoa(int n);
void	ft_putstr(char *str);

#endif
