#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* print_array - prints every character
* @a: int value
* @n: int value
*/
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f <= n - 1; f++)
	{
		printf("%d", a[f]);
		printf(",");
		printf(" ");
	}
	_putchar('\n');
}
