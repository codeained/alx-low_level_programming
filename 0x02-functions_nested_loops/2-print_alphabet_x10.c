#include "main.h"


/**
 * print_alphabet_x10 - function that prints alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	i++;
	}
}
