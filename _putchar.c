#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)	/* Defines the _putchar func with character parameter */
{
	return (write(1, &c, 1));	/* Writes character to stdout using write func */
}
