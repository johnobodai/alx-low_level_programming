#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: the string to be reversed.
 *
 * description: this function takes a string as input and reverses the order
 *              of its characters in place
 */
void rev_string(char *s)
{
	int length;
	length = 0;
	char temp;

	/* check if the input string is NULL */
	if ((s == NULL))
		return;

	/* calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* swap characters from both ends of the string towards the center */
	{
		int i;

		for (i = 0; i < length / 2; i++)
		{
			temp = s[i];
			s[i] = s[length -i -1];
			s[length -i -1] = temp;
		}
	}
}
