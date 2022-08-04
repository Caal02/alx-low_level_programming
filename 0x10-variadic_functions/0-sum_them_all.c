#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all args
 * @n: num of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum;
	unsigned int i;

	sum = 0;
	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
