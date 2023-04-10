#include "main.h"

/**
 * *_memset - X
 * @s: s
 * @b: b
 * @n: n
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}

	return (memory);
}
