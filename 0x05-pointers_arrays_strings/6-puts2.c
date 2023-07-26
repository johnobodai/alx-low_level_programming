#include "main.h"

/**
 * put2 - prints every other character of a string.
 * @str: the input string.
 *
 * description: the function takes a string as input and prints every other
 *              character of the string, starting with the first character.
 *              the output is then followed by a new line.
 */
void puts2(char *str)
{
	int i;

	i = 0;

	if (str == NULL)
		return;

	/* loop through the string and print every other character */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2; /* move to the next even index */
	}

	_putchar('\n'); /* print a new line at the end */
}
