#include <stdio.h>
/**
 * main - prints upper and lower case with putchar
 * Return: value of 0
*/
int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for  (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return (0);
}
