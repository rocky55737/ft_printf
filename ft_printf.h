/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:55:58 by rhong             #+#    #+#             */
/*   Updated: 2022/07/04 19:03:38 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchr(char content);
int	ft_putnbr(int *content);
int	ft_putstr(char *content);
int	ft_putptr(unsigned long long *content);
int	ft_putuint(unsigned int *content);
int	ft_puthex_l(int *content);
int	ft_puthex_u(int *content);
int	ft_printf(const char *format, ...);

#endif