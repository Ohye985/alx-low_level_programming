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
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}

	for (i = n; i > 98; i--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	if (n == 98)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
