#include "main.h"
/**
 * _strncat - cocnate two strings
 * @dest: char type
 * @src: char type
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	n = 1;
	while (dest[l])
		l++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l += 1;
	}
	dest[l] = '\0';
	return (dest);
}
