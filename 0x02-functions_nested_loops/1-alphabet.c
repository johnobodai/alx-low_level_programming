#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet, in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	return (0);
}
