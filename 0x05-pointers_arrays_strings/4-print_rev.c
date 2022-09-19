#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print in reverse
 * Return: the new string
 */

void print_rev(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}

	s--;

	while (length > 0)
	{
		_putchar(s);
		s--;
	}
	_putchar('\n');
}
