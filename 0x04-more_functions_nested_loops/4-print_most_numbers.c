#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{

	char x;

	for (x = 0; x <= 9; x++)
	{
	if (!(x == 2 || x == 4))
	_putchar(x);
	}
	_putchar('\n');
}
