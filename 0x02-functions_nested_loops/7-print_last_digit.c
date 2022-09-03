#include "main.h"
/**
  *print_last_digit - prints absolut value
  *@a: param is value to be absolute
  *Return: int valure
 */
int print_last_digit(int a)
{
	a %= 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
