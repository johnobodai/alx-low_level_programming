#include "main.h"
/**
 * times_table - Prints the multiplication table of 0 to 9
 *
 * Description: This function prints the multiplication table of numbers from
 *              0 to 9 in a grid format. Each number is separated by a comma
 *              and a space.The table is printed using the _putchar function.
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k == 0)
			{
				_putchar(k + '0');
			}
			else if (k > 0 && k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
