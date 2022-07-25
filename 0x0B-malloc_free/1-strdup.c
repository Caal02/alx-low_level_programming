#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - retun point in new allocated space
 * @str: char value
 *
 * Return: null value
 */
char *_strdup(char *str)
{
	char *p;
	int a = 0, b = 1;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	p = malloc((sizeof(char) * b) + 1);
	if (p == NULL)
		return (NULL);
	while (a < b)
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
