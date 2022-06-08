#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;
	int r;

	if (n < 0)
	{
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	}
	{
	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	
	return (0);
	}
}
