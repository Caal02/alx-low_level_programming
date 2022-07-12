#include "main.h"

/**
 *print_rev - update value of pointer
 *@s: integer vaue
 *Return: zero
 */
void print_rev(char *s);
{
	int a;
	int b;

	b = strln(s);
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
