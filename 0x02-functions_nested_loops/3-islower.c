#include "main.h"
/**
 * _islower(int c) - Checks for lowercase character
 *
 * Descrition: The function checks if it's parameter is a lowercase character
 *
 * Returns: 1 (Sucess)
 *          0 (Failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
