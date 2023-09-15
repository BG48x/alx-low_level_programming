#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Return: Always 0
 */

void print_number(int n)

{
	unsignef int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchat(i % + '0');
}
