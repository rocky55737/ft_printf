/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:40:31 by rhong             #+#    #+#             */
/*   Updated: 2022/07/07 19:48:56 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_puthex_l(int content);
int			ft_puthex_u(int content);
static void	display_hex(unsigned int n, int *cnt);
static void	display_hex_u(unsigned int n, int *cnt);

int	ft_puthex_l(int content)
{
	int	cnt;

	cnt = 0;
	display_hex(content, &cnt);
	return (cnt);
}

int	ft_puthex_u(int content)
{
	int	cnt;

	cnt = 0;
	display_hex_u(content, &cnt);
	return (cnt);
}

static void	display_hex(unsigned int n, int *cnt)
{
	(*cnt)++;
	if (n >= 16)
		display_hex(n / 16, cnt);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

static void	display_hex_u(unsigned int n, int *cnt)
{
	(*cnt)++;
	if (n >= 16)
		display_hex_u(n / 16, cnt);
	write(1, &"0123456789ABCDEF"[n % 16], 1);
}
