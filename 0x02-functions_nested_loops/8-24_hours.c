#include "main.h"
/**
 * jack_bauer - Prints ever minute of a 24-hour day
 *
 * Description: This function prints every minute of a 24-hour day in the
 *              format "HH:MM" It used nested loops to iterate over the
 *              hours (0 to 23)  and minutes (0 to 59). The _putchar
 *              function is used to print the characters.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
}
