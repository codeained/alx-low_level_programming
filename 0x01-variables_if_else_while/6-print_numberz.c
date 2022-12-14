#include <stdio.h>

/**
 * main - print from 0 all single digit numbers of base ten
 * only use put char and without char variable
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
