#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -
 *
 * what 
 *
 * Returns : Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int r = n % 10;
if (r > 5)
{
printf("Last digit if %i is %i and is greater than 5\n", n,r);
}
else if (r < 6 && r != 0)
{
printf("Last digit of %i is %i and id less then 6 and not 0\n", n,r);
}
else
printf("Last digit of %i is 0 and is 0", n);
return (0);
}
