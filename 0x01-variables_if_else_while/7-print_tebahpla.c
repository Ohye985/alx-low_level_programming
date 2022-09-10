#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
