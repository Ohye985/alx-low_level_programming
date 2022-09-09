#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets except q and e
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char a = 'a';

	if (a != 'q' && a != 'e')
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
