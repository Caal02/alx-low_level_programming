#include "main.h"

/**
 *rev_string - update value of pointer
 *@s: integer vaue
 *Return: zero
 */
void rev_string(char *s)
{
	char w;
	int f;
	int l1;
	int l2;

	l1 = 0;
	l2 = 0;
	while (s[l1] != '\0')
	l1++;
	l2 = l1 - 1;
	for (f = 0; f < l1 / 2; f++)
	{
		w = s[f];
		s[f] = s[l2];
		s[l2] = w;
		l2 -= 1;
	}
}
