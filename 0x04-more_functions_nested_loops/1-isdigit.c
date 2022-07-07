#include "main.h"
/**
 *_isdigit - chace for a digit
 * @c: integer
 * Return: 1 if it is digit 0 if it's not
 */
int _isdigit(int c);
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
