#include "main.h"
/**
  * wildcmp - commpaires two strings
  * @s1: char type
  * @s2: char type
  * Return: value
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2 == '\0';
	}
	else
	{
		if (*s1 == *s2)
		{
			return (1);
		}
		else
			return (0);
	}
}

