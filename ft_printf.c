/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:28:59 by rhong             #+#    #+#             */
/*   Updated: 2022/07/07 17:20:37 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	do_printf(va_list arg_ptr, const char *fmt);
static int	select_print(char flag, void *content);
int			ft_printf(const char *format, ...);

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	arg_ptr;

	ret = 0;
	va_start(arg_ptr, format);
	ret = do_printf(arg_ptr, format);
	va_end(arg_ptr);
	return (ret);
}

static int	do_printf(va_list arg_ptr, const char *fmt)
{
	int		print_cnt;
	int		fmt_idx;
	char	next_chr;

	print_cnt = 0;
	fmt_idx = 0;
	while (fmt[fmt_idx])
	{
		if (fmt[fmt_idx] == '%' && fmt[fmt_idx + 1])
		{
			fmt_idx++;
			next_chr = fmt[fmt_idx];
			print_cnt += select_print(next_chr, arg_ptr);
			arg_ptr++;
		}
		else
			print_cnt += ft_putchr(fmt[fmt_idx]);
		fmt_idx++;
	}
	return (print_cnt);
}

static int	select_print(char flag, void *content)
{
	int	print_cnt;

	print_cnt = 0;
	if (flag == 'd' || flag == 'i')
		print_cnt += ft_putnbr(*(int *)content);
	else if (flag == 's')
		print_cnt += ft_putstr((char *)content);
	else if (flag == 'p')
		print_cnt += ft_putptr(content);
	else if (flag == 'u')
		print_cnt += ft_putuint(*(unsigned int *)content);
	else if (flag == 'x')
		print_cnt += ft_puthex_l(*(int *)content);
	else if (flag == 'X')
		print_cnt += ft_puthex_u(*(int *)content);
	else if (flag == '%')
	{
		write(1, "%", 1);
		print_cnt++;
	}
	return (print_cnt);
}
