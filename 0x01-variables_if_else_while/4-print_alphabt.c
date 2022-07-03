#include <stdio.h>
/**
 * main - prints upper and lower case with putchar
 * Return: value of 0
*/
int main(void)
{
	int a;

	for (a = 97; a <= 122;  a++)
	{
		if (a != 101 && a != 113)
		{
		putchar(a);
		}
	}
	putchar(10);
	return (0);
}
