#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf(num);
		num++;
	}
	printf('\n');
	return (0);
}
