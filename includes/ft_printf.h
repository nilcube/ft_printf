/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:01:41 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 12:35:09 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

# define P_PREFIX 0b00001     // '#': pre fix hex with '0x' or '0X'.
# define P_ZPADDING 0b00010   // '.': padding with zeros.
# define P_R_SPADDING 0b00100 // '-' : reverse padding.
# define P_SPADDING 0b01000   // ' ': space padding.
# define P_POS_SIGN 0b10000   // +: add + sign if the %d is positive.

# define STDOUT 1

typedef struct print_block
{
	void	*data;
	char	conv;
	int		flags;
}			t_printy;

int			ft_printf(const char *fmt, ...);
void		ft_putchar(char c);
void		ft_putstr(char *s);
int			ft_strlen(char *s);
#endif
