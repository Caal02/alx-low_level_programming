#include <stdio.h>
#include <stdlib.h>
/**
  * main - print name follwed by /n
  * @argc: int value
  * @argv: char value
  * Return: value of zero
 */
int main(int argc, char *argv[])
{
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	b = atio(argv[1]) * atio(argv[2]);
	/**
	 *printf("%d", atio(argv[1]) * atio(argv[2]));
	 */
	_putchar(b);
	return (0);
}
