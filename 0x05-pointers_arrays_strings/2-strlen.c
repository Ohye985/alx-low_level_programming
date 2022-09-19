#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be manipulated
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\n')
	{
		length++;
	}
	return (length);
}
