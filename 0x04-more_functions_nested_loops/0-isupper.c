#include "main.h"
/**
 *_isdigit - chace for a digit
 * @c: integer
 * Return: 1 if it is digit 0 if it's not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
