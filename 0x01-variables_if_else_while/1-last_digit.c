#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit stored in n
 *
 * Return: value of zer0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	else if (n == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
