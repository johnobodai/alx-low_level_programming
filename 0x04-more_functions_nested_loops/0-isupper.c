#include "main.h"

/**
 *_isupper() - checks for uppercase charater
 *@c: the character to be checked
 *
 * Returns : i
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
