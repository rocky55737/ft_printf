/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:55:58 by rhong             #+#    #+#             */
/*   Updated: 2022/07/06 19:23:30 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchr(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putptr(void *content);
int	ft_putuint(unsigned int content);
int	ft_puthex_l(int content);
int	ft_puthex_u(int content);
int	ft_printf(const char *format, ...);

#endif