#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
