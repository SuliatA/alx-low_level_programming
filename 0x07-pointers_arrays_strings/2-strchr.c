#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @c: char to be located
 * @s: memory area to be searched
 * Return: pointer to the first occurrence of the character c in the string s
 * if c is not found - Null.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

