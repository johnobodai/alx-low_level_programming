#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Description: This function prints the numbers from 0 to 9 to the standard output.
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

