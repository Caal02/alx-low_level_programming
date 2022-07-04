#include <stdio.h>
/**
 * main - prints number in base 10
 * Return: value of 0
*/
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
	putchar(48);
	for (b = 48; b <= 57; b++)
		{
		putchar(a);
		putchar(b);
			if (a != 57 || b != 57)
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
