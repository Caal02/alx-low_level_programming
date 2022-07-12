#include "main.h"

/**
 *void rev_string - update value of pointer
 *@s: integer vaue
 *Return: zero
 */
void rev_string
{
	int a;
	int b;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
