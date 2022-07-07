/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:43:55 by rhong             #+#    #+#             */
/*   Updated: 2022/07/07 19:48:53 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_putptr(void *content);
static void	display_hex_ptr(unsigned long long n, int *cnt);

int	ft_putptr(void *content)
{
	int	cnt;

	cnt = 0;
	write(1, "0x", 2);
	display_hex_ptr((unsigned long long)content, &cnt);
	return (cnt + 2);
}

static void	display_hex_ptr(unsigned long long n, int *cnt)
{
	(*cnt)++;
	if (n >= 16)
		display_hex_ptr(n / 16, cnt);
	write(1, &"0123456789abcdef"[n % 16], 1);
}
