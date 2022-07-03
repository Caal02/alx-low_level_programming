#include <stdio.h>
/**
 * main - prints number in base 10 with putchar
 * Return: value of 0
*/
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
	putchar(a);
	}
	putchar(10);
	return (0);
}
