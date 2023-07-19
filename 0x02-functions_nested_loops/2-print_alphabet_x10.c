#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 *
 * Description: This programe prints x10 the alphabet in lowercase followed
 *              by a new line.
 *
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int num;
	char alpha;

	num = 0;

	do
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		num++;
	}while (num < 9);
}
