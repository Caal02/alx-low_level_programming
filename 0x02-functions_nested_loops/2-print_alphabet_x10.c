#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times alpha low
 * Return: always zero
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
		_putchar(b);
		}
		_putchar('\n');
	}
}
