#include <stdio.h>
#include "main.h"
/**
  * main - print name follwed by /n
  * @argc: int value
  * @argv: char value
  * Return: value of zero
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", atio(argv[1]) * atio(argv[2]));
	return (0);
}
