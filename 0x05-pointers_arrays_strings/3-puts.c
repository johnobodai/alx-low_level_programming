#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: the input string to be printed
 *
 * description: this function prints a string, followed by a new line,
 *              to the stout
 *
 *Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
