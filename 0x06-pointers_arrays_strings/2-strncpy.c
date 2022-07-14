#include "main.h"
/**
 * _strncpy - cocnate two strings
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int i;

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
