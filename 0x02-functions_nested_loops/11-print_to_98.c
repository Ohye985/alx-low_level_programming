#include "main.h"

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", n);
	}

	for (i = n; i > 98; i--)
	{
		printf("%d, ", n)
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
