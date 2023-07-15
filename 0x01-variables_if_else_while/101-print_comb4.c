#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of three single-digit numbers
 *              in ascending order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar((i != 7 || j != 8 || k != 9) ? ',' : '\n');
				putchar((i != 7 || j != 8 || k != 9) ? ' ' : '\0');
			}
		}
	}

	return (0);
}
