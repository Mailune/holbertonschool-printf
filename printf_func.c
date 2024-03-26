include "main.h"

/**
 * printf_func - check and verif the specifier to send it
 * to the right function to use
 *
 * @s: The specifier
 *
 * Return:
 */


int (*printf_func(char *ptr_specifier))(va_list)
{
	print spe[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{NULL, NULL}
		};
	int i = 0;
}
