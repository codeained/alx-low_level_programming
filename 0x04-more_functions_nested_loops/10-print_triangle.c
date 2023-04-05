#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle followed by new line
 *
 * @size: the siez of the triangle
 *
 * Return: Always 0(Success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
