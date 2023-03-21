#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: - the last digit to be printed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
