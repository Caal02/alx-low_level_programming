#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: char value
 * @s2: char value
 * @n: is int value
 * Return: string and Null if falls
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		p[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		p[len++] = s2[index];
	p[len] = '\0';
	return (p);
}
