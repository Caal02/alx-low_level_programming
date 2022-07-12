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

	for (f = 0; f < n - 1; f++)
	{
	_putchar(a[n]);
	_putchar(44 + ' ');
	}
	_putchar('\n');
}
