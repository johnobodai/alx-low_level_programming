/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest
 * @dest: The destination buffer where the string will be copied to
 * @src: The source string to be copied
 *
 * Description: This function copies the characters of the string pointed to
 *              by 'src', including the terminating null byte '\0', to the
 *              buffer pointed to by 'dest'. The copying stops when the null
 *              byte is encountered in 'src'.
 *
 * Return: The pointer to 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    /* Copy each character from 'src' to 'dest' until the null byte is found */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Copy the null byte at the end of 'src' to 'dest' */
    dest[i] = '\0';

    /* Return the pointer to the destination string 'dest' */
    return (dest);
}

