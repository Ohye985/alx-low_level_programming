#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase then uppercase
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char a = "a";
	char c = "A";

	while (a <= "z" && c <= "Z")
	{
		putchar("a");
		a++;
		putchar("c");
		c++;
	}
	
	putchar("\n");
	return (0);
}
