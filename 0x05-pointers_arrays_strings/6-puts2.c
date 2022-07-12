#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character
 * @str: charvalue
 */
void puts2(char *str)
{
	int l;
	int f;

	l = strlen(str);
	for (f = 0; f < l; f += 2)
	{
	_putchar(strln[f]);
	}
_putchar('\n');
}
