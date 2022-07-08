#include "main.h"
/**
 * print_line - chace for a digit
 * Return: value 0
 * @n: integer value
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	else
		_putchar('\n');
}
