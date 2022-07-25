#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creat arrayof char intalized with char
 * @size: unsigned int value
 * @c: char value
 * Return: Null value
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
