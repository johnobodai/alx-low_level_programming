#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: This function prints all the letters of the alphabet
 *              in lowercase, form 'a' to 'z', followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

}
