#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *c)
{
    int i;
    if (*c)
    {
        for (i = 0; c[i] != '\0'; i++)
        {
            putchar(c[i]);
        }
    }
}
