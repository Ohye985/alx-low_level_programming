#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 without char variables
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int num = "0";

	while (num < "10")
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
