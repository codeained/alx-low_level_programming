#include "main.h"


/**
 * print_most_numbers - print numbers from 0 to 9, followed by new line
 * do not print 2 and 4
 *
 * Return: Always 0;
 */
void print_most_numbers(void)
{
	int c = 0;

	do {
		if (c == 2 || c == 4)
		{
			i++;
			continue;
		}
		_putchar(c + '0');
		c++;
	} while (c < 10);
	_putchar('\n');
}
