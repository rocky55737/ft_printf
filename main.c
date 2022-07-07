#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = -9;

	ft_printf("%x, %X, %p\n", a, a, a);
	write(1, "\n\n\n", 3);
	printf("%x, %X, %p\n", a, a, a);

	return (0);
}