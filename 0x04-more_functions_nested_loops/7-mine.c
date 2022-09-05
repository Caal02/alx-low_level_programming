#include "main.h"
/**
  *print_diagonal - prints diagonal lines
  *@n: int type
  *Return: no value
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
