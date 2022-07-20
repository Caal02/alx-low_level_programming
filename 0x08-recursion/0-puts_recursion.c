#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string in new line
 * @s: char type
 */
void _puts_recursion(char *s)
{
	int i;

	if (i == 0)
	{
		return (0);
	}
	else
	{
	_putchar (s[i] + _puts_recursion(s[i]));
	i++;
	}
	_putchar ('\n');
}
