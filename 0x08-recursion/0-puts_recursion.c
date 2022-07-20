#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string in new line
 * @s: char type
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		_putchar('\n')
		return (0);
	}
	_putchar (*s + _puts_recursion(s));
	i++;
}
