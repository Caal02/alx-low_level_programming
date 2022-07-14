#include "main.h"
/**
 * _strcat - cocnate two strings
 * @dest: char type
 * @src: char type
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
