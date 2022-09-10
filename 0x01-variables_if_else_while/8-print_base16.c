#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints hexadecimal base, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int hexaLetters = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (hexaLetters <= 'f')
	{
		putchar(hexaLetters);
		hexaLetters++;
	}

	putchar('\n');

	return (0);
}
