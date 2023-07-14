#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the number form 0 to 9,
 * separated by commas and spaces, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main()
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
