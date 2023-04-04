#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: the contant byte represents the char to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
