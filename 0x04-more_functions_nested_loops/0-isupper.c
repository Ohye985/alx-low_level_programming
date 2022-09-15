#include "main.h"

/**
 * _isupper - define if a character is uppercase
 * @c: charater to be compared
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
