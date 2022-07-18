#include "main.h"

/**
 * _memset - fills memory with constant byet
 * @s: char type
 * @b: char type
 * @n: int type
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
