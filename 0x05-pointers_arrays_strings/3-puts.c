#include "main.h"
#include <stdio.h>


/**
 * _puts - function that prints a string followed by new line to stdout
 *
 * @str: character to be printed
 *
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
