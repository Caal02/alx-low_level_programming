#include <stdio.h>
/**
  *main - calulat multiple and sum of 3&5
  *Return: no value
 */

int main(void)
{
	int i, c;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 ==0)
		c = c + i;
	}
		printf("%d\n", c);
	return (0);
}
