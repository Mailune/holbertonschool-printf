#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...)

int _putchar(char c);
int printf_char(va_list args);
int printf_nbr(va_list args);
int printf_percent(va_list args);
int printf_string(va_list args);

/*
 * struct specifier - format specifier and fonction
 * @format: the format specifier
 * @function: function of the format specified
 */

typedef struct specifier
{
	char format;
	int (*function)(va_list);
};

#endif
