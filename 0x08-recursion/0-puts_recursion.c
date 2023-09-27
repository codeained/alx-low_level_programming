#include "main.h"

/**
 * _puts_recursion - Prints a string to the console using recursion.
 *
 * @s : the string characters to be printed
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
