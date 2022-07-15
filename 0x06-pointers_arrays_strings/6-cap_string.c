#include "main.h"
/**
  * cap_string - capitalizes
  * @x: string 
  * Return: char value
  */
char *cap_string(char *x)
{
	int a = 0, i;
	int l = 13;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (x[a])
	{
		i = 0;
		while (i < l)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		a++;
	}
	return (x);
}
