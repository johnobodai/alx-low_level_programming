#include "main.h"
/**
 * swap_int - swaps values of int
 * @a: the first parameter
 * @b: the second parameter
 *
 * description : this function takes two integer pointers and swaps their values
 *
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
