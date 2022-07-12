#include "main.h"

/**
 *swap_int - update value of pointer
 *@a: integer vaue
 *@b: integer value
 *Return: zero
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;


}
