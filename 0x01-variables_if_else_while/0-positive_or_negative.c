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
	printf("%d is ", n);

	/* Check if the number is positive, negative, or zero */
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");

	return (0);
}

