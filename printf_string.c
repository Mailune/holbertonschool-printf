#include "main.h"

/**
 * printf_string - prints a string
 * @args: list of arguments from variadic function printf
 * Return: length of the printed string)
 */

int printf_string(va_list args) /* Defines printf_string taking va_list. */
{
	int count = 0;	/* Initializes count of printed characters. */
	char *str;	/* Declares a pointer to the string. */

	str = va_arg(args, char*);	/* Retrieves string argument from va_list. */

	if (str == NULL)	/* Checks if string is NULL. */
	{
		str = "(null)";	/* Assigns default string if NULL. */
	}

	while (*str)	/* Iterates through the string. */
	{
		_putchar(*str);	/* Prints each character. */
		count++;	/* Increments count for each character printed. */
		str++;	/* Moves to the next character in the string. */
	}

	return (count);	/* Returns the total length of the printed string. */
}

