#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - printing without usig puts and printf
 * Return: value of 1
 */
int main(void)
{
	write(2, "echo and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
