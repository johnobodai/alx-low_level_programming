#include "main.h"
/**
 * _isalpha - checks if a character is an alphabetic charater
 * @c: the charater to be checked
 *
 *Return: 1 if c is an alphabetic charater, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
