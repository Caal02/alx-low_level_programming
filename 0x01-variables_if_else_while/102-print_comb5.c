#include <stdio.h>
/**
 * main - prints number in base 10
 * Return: value of 0
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
	for (b = 48; b <= 57; b++)
		{
		putchar(a);
		putchar(b);
		putchar(32);
		}
	for (c = 48; c <= 57; c++)
	{
	for (d = 49; d <= 57; d++)
		if (c != a && c != b  && d != a && d != b)
		{
		putchar(c);
		putchar(d);
		putchar(44);
		putchar(32);
		}
	}
	}
	putchar(10);
	return (0);
}
