include "main.h"
/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  * Return: char var
  */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
			i++;
	}
	return (x);
}
