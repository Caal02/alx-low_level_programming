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
	strncat(dest, src, n);
	return (dest);
}
