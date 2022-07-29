#include "main.h"
#include <stdlib.h>
/**
  * _calloc - allocates memory for an initialized buffer
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	a = p;
	for (i = 0; i < (size * nmemb); i++)
	{
		a[i] = '\0';
	}
	return (p);
}
