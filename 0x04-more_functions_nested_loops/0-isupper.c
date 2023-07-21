#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: The character to check for uppercase.
 *
 * Description: This function checks if a given character is uppercase.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
