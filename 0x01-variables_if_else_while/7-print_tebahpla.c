#include <stdio.h>
/**
 * main -
 *
 * what the function does here
 *
 * Returns
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
