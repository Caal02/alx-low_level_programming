#include "main.h"
#include <string.h>
/**
 * _strncpy - cocnate two strings
 * @dest: char type
 * @src: char type
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
