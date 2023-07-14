#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabets from 'z' to 'a', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	for (; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}

