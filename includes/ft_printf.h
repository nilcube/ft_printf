/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:01:41 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/31 11:44:40 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define STDOUT 1
# define CONVERSIONS "cspdiuxX%"
# define HEX "0123456789ABCDEF"
# define HEXL "0123456789abcdef"

int	ft_printf(const char *fmt, ...);

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_uputnbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex(char c, unsigned long n);

int	ft_strlen(char *s);
int	valid_conversions(char c);
#endif
