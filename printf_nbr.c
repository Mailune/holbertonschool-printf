include "main.h"

/**
 * printf_nbr - print a number
 * @args: args
 * Return: len1 + len2
 */

int printf_nbr(va_list args)
{
int i, temp, digit, divide = 1, len1 = 0, len2 = 0;
	int num = va_arg(args, int);

	/*si num = 0 alors afficher 0*/
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/*si num est int_min alors afficher -2 puis le int max*/
	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		len2 = 2;
	}

	/*si num est negatif alors afficher - puis le nombre en sa valeur absolue*/
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len2 = 1;
	}

	/*valeur de num dans une variable temporaire*/
	temp = num;

	/*divise la valeur par dix jusqu'à 0 pourt compter le nbr de digit*/
	while (temp != 0)
	{
		temp /= 10;
		len1++;
	}
	divide = 1;

	/*extraire chaque digit grâce au len1 précédent*/
	for (i = 1; i < len1; i++)
		divide = divide * 10;

	/*écrit chaque digit 1 à 1*/
	while (divide != 0)
	{
		digit = num / divide;
		num = num % divide;
		divide = divide / 10;
		_putchar(digit + '0');
	}
	return (len1 + len2);
}

