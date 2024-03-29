#include "main.h"

/**
 * printf_func - check and verif the specifier to send it
 * to the right function to use
 * specif: structure of the function
 * @ptr_specifier: pointer of element
 * Return: function associate or NULL if not found
 */

int (*printf_func(const char *ptr_specifier))(va_list)
{
	specif function[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'%', printf_percent},
		{'d', printf_nbr},
		{'i', printf_nbr},
		{'\0', NULL}
		};

	int index;	/* Counter variable */

	/* Loop through the array to find the matching specifier */
	for (index = 0; function[index].format != '\0'; index++)
	{
		if (*ptr_specifier == function[index].format)/* Check if specifier matches */
			return (function[index].function);	/* Return associated function */
	}
	return (NULL);	/* Return NULL if specifier not found */
}
