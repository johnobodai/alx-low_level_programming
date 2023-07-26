#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 *
 * Description: The function prints the elements of the array @a up to the
 * first @n elements, separated by a comma and a space, followed by a new line.
 *
 * Example:
 *   int arr[] = {1, 2, 3, 4, 5};
 *   print_array(arr, 3); // Output: "1, 2, 3\n"
 */
void print_array(int *a, int n)
{
    int i;

    /* Loop through the first n elements of the array */
    for (i = 0; i < n; i++)
    {
        /* Print the current element of the array */
        printf("%d", a[i]);

        /* If it's not the last element, print comma and space */
        if (i < n - 1)
            printf(", ");
    }

    /* Print a newline character to end the line */
    printf("\n");
}

