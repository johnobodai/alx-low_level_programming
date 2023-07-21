#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints a straight line of the character '_' in
 * the terminal. The line will be of length 'n'. If 'n' is 0 or negative,
 * the function only prints a new line.
 *
 * Return: void
 */
void print_line(int n)
{
    if (n > 0)
    {
        int i;

        for (i = 0; i < n; i++)
            _putchar('_');
    }

    _putchar('\n');
}

