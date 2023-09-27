#include "main.h"
#include "_putchar.c"

/**
 * main - function that prints a string, followed by a new line.
 * @s : the string characters to be printed
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}
	 _puts_recursion(s + 1);
	 _putchar(*s);
}
int main(void)
{
	char s[] = "Puts with recursion";
	_puts_recursion(s);
	return (0);
}
