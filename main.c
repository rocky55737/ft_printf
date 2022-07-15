#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = -9;

	ft_printf("%x this is %k %%the te%%st %X\n", a, a);
	write(1, "\n\n\n", 3);
	printf("%x this is %k %%the te%%st %X\n", a, a);

	return (0);
}