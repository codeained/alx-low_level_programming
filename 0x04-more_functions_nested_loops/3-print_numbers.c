#include "main.h"


/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char c = 0;

	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n')
}
