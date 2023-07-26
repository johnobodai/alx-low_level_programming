#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: the input string to be printed in reverse.
 *
 * description: this function prints each char of the input string @s in
 *              reverse order, followed by a new line.
 *
 * Return: void ( no return value)
 */
void print_rev(char *s)
{
    /* Check if the input string is NULL */
	if (s == NULL)
		return;

	int length;
	length = 0;

    /* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

    /* Print the characters in reverse order */
	{
		int i;
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}

    /* Print a new line character at the end */
	_putchar('\n');
}
