#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -print strings
 *@separator: separator
 *@n:number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;
	char array[] = "(nil)";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
			p = array;
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s%s", p, separator);
		} else
		{
			printf("%s", p);
		}
	}
	printf("\n");
	va_end(ap);
}
