#include "main.h"

/**
 *_memcpy - copies memory area
 * @dest: char type
 * @src: char type
 * @n: unsigned int
 * Return: value of
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
