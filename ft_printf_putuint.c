/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putuint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:06:58 by rhong             #+#    #+#             */
/*   Updated: 2022/07/07 18:59:00 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_putuint(unsigned int content);
static void	display_uint(unsigned int n, int *cnt);

int	ft_putuint(unsigned int content)
{
	int	cnt;

	cnt = 0;
	display_uint(content, &cnt);
	return (cnt);
}

static void	display_uint(unsigned int n, int *cnt)
{
	(*cnt)++;
	if (n >= 10)
		display_uint(n / 10, cnt);
	write(1, &"0123456789"[n % 10], 1);
}
