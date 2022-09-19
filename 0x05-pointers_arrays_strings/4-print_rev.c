#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print in reverse
 * Return: the new string
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
