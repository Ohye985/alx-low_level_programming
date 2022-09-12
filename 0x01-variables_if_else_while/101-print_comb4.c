#include <stdio.h>

/**
 * main - print 00 to 99 with no duplicate combo
 * Return: Always 0
 */

int main(void)
{
	int firstDigit;
	int lastDigit;
	int secondDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (secondDigit = (firstDigit + 1); secondDigit <= '9'; secondDigit++)
		{
			for (lastDigit = (secondDigit + 1); lastDigit <= '9'; lastDigit++)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(lastDigit);

				if (firstDigit != '7' || secondDigit != '8' || lastDigit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
