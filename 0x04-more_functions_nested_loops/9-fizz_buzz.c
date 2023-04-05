#include "main.h"
#include <stdio.h>

/**
 * main - prints from 1 to 100 followed by new line
 * but prints Fizz for multiples of 3 and prints
 * buzz for multiples of 5 and prints FizzBuzz for multiples of both
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
