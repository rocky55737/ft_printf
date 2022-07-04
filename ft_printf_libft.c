/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_libft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:22:50 by rhong             #+#    #+#             */
/*   Updated: 2022/07/04 19:31:29 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static void	display_nbr(int n, int *cnt)
{
	(*cnt)++;
	if (n >= 10)
		display_nbr(n / 10, cnt);
	write(1, &"0123456789"[n % 10], 1);
}

int	ft_putnbr(int n)
{
	int	cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		cnt = 11;
		return (cnt);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		cnt++;
	}
	display_nbr(n, &cnt);
	return (cnt);
}

int	ft_putstr(char *s)
{
	int	cnt;

	cnt = 0;
	if (!s)
		return (cnt);
	while (*s)
	{
		write(1, s++, 1);
		cnt++;
	}
	return (cnt);
}