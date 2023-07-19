#include "main.h"
/**
 * _islower(int c) - Checks if a character is lowercase
 * @c: The character to be checked
 *
 *Description:
 *    This function takes a character as input and checks if it is a
 *    lowercse letter. It returns 1 if the character is lowercase
 *    and 0 otherwise.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
