#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check for
 * Return: 1 if lowercase and 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
