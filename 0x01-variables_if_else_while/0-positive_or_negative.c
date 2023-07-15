#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints whether
 *              the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */

	/* Print the number */
	printf("The number ");

	/* Check if the number is zero */
	if (n == 0)
		printf("0 is zero\n");
	else
	{
		/* Print the absolute value of the number */
		if (n < 0)
			n *= -1;
		printf("%d is ", n);

		/* Check if the number is positive or negative */
		if (n > 0)
			printf("positive\n");
		else
			printf("negative\n");
	}

	return (0);
}

