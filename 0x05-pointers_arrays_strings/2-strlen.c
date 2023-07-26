#include "main.h"
/**
 * _strlen - calculate the length of string
 * @s: the string whose length is to be calculated
 *
 * description: the function is intended to calculate the length of a given
 *              string and return the length as an integer
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
