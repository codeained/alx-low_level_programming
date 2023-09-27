#include "main.h"

/**
 * _print_rev_recursion - function that prints string in reverse
 *
 * @s: the string to be printed
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
