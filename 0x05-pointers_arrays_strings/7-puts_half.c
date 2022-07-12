#include "main.h"
#include <string.h>
/**
* puts_half - prints every character
* @str: char value
*/
void puts_half(char *str)
{
	int a, b, f;

	a = strlen(str);
	if (a % 2 != 0)
	b = a / 2 + 1;
	else
	b = a / 2;
	for (f = b; f < a; f++)
	_putchar(str[f]);
	_putchar('\n');
}
