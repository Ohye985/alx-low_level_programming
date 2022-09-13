#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by a new line
 * Return: 0
 */

int main(void)
{
	char _putchar[] = '_putchar';
	int i;

	for (i = 0; i < _putchar.length; i++)
	{
		_putchar(_putchar[i]);
		_putchar('\n');
		return (0);
	}
}
