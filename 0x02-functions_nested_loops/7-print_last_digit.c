#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @lastDigit: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int lastDigit)
{
	int remainder;

	remainder = (lastDigit % 10);

	if (remainder < 0)
	{
		remainder = (-1 * remainder);
	}
	_putchar(remainder + '0');
	return (remainder);
}
