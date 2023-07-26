#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The input string.
 *
 * Description: The function should print the second half of the string.
 * If the number of characters is odd, it should print the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Example:
 *   puts_half("Hello, world!"); // Output: "world!"
 *   puts_half("Test"); // Output: "st"
 */
void puts_half(char *str)
{
    int length;
	int start_index;

	length = 0;

    /* Loop through the string to calculate its length */
    while (str[length] != '\0')
        length++;

    /* Calculate the starting index to print the second half of the string */
    start_index = (length + 1) / 2;

    /* Loop through the string starting from the calculated index */
    while (str[start_index] != '\0')
    {
        /* Print the current character of the string */
        _putchar(str[start_index]);
        start_index++;
    }

    /* Print a newline character to end the line */
    _putchar('\n');
}

