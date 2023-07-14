#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Assigns a random number to the variable n each time itis executed
 * and determines if the n is positive, negative or zero
 *
 * Returns: Always 0 - (indicating successful execution)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
