#include<unistd.h>


/**
 * _putchar - function that prints puchar
 * @c the character to print
 *
 * Return: 0 (Always).
 */
int main()
{
	char str[]="_putchar\n";
	int len = sizeof(str) - 1;

	write(STDOUT_FILENO, str, len);

	return 0;
}
