#include "main.h"
/**
 * print_last_digit - Computes the last digit of an integer
 * @i: The integer
 *
 * Return: The last digit of the integer
 */
int print_last_digit(int i)
{
	lst_dig = i % 10;
	if (lst_dig < 0)
		lst_dig = -lst_dig;
	return lst_dig;
}
