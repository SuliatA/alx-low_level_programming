#include "main.h"

/**
 * print_numbers - a functon that prints numbers from zero to nine
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

