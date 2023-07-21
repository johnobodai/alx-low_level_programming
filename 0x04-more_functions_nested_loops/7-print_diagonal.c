#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line of the character '\'
 *              in the terminal. The diagonal will be of length 'n'.
 *              If 'n' is 0 or negative,
 *              the function only prints a new line.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int spaces;
	int i;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

