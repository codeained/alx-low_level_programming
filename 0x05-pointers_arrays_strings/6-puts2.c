#include "main.h"
#include <unistd.h>


/**
 * puts2 - prints every other character of string
 * start with firts character followed by new line
 *
 * @str: the character of string
 *
 * Return: characters of string
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
