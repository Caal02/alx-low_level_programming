#include "main.h"

/**
 * _isalpha - checks alpha character
 * @c: it is a character
 * Return: 1 is a letter 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
