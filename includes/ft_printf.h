/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:01:41 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/31 09:46:42 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define P_PREFIX 0b000001     // '#': pre fix hex with '0x' or '0X'.
# define P_ZPADDING 0b000010   // '.': padding with zeros.
# define P_R_SPADDING 0b000100 // '-' : reverse padding.
# define P_SPADDING 0b001000   // ' ': space padding.
# define P_POS_SIGN 0b010000   // +: add + sign if the %d is positive.
# define P_NPADDING 0b100000   // "42"

# define STDOUT 1
# define CONVERSIONS "cspdiuxX%"
# define FLAGS "#.- +0"
# define HEX "0123456789ABCDEF"
# define HEXL "0123456789abcdef"

int	ft_printf(const char *fmt, ...);

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_puthex(char c, int n);

int	ft_strlen(char *s);

int	valid_conversions(char c);
/*int	valid_flag(char c);
int	ft_parse(va_list list, const char *sub_fmt);*/
#endif
