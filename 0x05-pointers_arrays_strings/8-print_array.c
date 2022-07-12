#include "main.h"
#include <string.h>
/**
* print_array - prints every character
* @a: int value
* @n: int value
*/
void print_array(int *a, int n)
{
	int f, i;

	i = a[n];
	for (f = 0; f < n - 1; f++)
	{
	_putchar(i);
	_putchar(44 + '\0');
	}
	_putchar('\n');
}
