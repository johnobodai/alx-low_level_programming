#include <stdio.h>
/**
 * main -
 *
 * what do you do?
 *
 * Returns:
 */
int main(void)
{
char small_alph = 'a';
while (small_alph <= 'z')
{
if (small_alph != 'q' && small_alph != 'e')
{
putchar(small_alph);
}
small_alph++;
}
putchar('\n');
return (0);
}
