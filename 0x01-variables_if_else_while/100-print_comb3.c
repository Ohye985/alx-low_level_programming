#include <stdio.h>

/**
 * main - print 00 to 99 with no duplicate combo
 * Return: Always 0
 */

int main(void)
{
	int firstDigit;
	int lastDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (lastDigit = (firstDigit + 1); lastDigit <= '9'; lastDigit++)
		{
			putchar(firstDigit);
			putchar(lastDigit);

			if (firstDigit != '8' && lastDigit != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
