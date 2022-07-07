#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = 31;

	ft_printf("%d, %x, %p\n", a, a, &a);
	write(1, "\n\n\n", 3);
	printf("%d, %x, %p\n", a, a, &a);

	return (0);
}