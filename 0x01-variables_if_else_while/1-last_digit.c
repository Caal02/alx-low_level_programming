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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("%d and is greater than 5", m);
	}
	else if (m == 0)
	{
		printf("%d and is 0", m);
	}
	else
	{
		printf("%d and is less than 6 and not 0", m);
	}
	printf("\n");
	return (0);
}
