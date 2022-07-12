#include "main.h"

/**
 *_puts - update value of pointer
 *@str: integer vaue
 *Return: zero
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
