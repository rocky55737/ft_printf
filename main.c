#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = -9;

	ft_printf("%x, %X\n", a, a);
	write(1, "\n\n\n", 3);
	a = printf("%x, %X\n", a, a);

	return (0);
}