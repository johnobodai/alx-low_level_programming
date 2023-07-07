#include "main.h"
/**
 * time_table - Prints the multiplication table of 0 to 9
 *
 * Descriptions: Prints the multiplication tabel of 0 to 9
 *               it does so by looping through 0 to 9 to for a table
 *               it then prints using _putchar as the output
 * Return: Void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}

			_putchar(' ');
		}
		_putchar('\n');
	}
}
