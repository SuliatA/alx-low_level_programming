#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: the bytes to be searched for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * if no byte is found - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
