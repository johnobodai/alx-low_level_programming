#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description : Assign a random number to the variable n, n is then tested to
 *               see if it is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);
	/* test condition here */

	if (last_digit < 0)
		printf("less than 6 and not 0\n");
	else if (last_digit > 0)
		printf("greater than 5\n");
	else
		printf("is 0\n");

	return (0);
}
