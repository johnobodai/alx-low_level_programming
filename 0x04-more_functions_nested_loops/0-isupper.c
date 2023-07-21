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
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
