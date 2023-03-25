#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: No of times
 * Return: Always 0
 */
void print_line(int n)
{
	int (l);

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
