#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = '0'; i <= '9'; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
