#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: destination array where data is to be copied
 * @src: source of data to be copied
 * @n: number of times to copy byte
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
