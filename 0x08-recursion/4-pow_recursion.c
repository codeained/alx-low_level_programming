#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to thepower of y
 *
 * @x: one of the values
 *
 * @y: the other value
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}

}
