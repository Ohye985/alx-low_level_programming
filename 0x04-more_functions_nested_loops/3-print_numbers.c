#include "main.h"

/**
 * print_numbers - print 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
