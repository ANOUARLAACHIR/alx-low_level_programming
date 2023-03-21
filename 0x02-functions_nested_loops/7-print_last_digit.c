#include "main.h"

/**
 * print_last_digit - a function that returns the last character of a number 
 *
 * @n: Return n, -n otherwise
 * Return: n, -n otherwise
 */

int print_last_digit(int n)
{
	int m;

	m = (n % 10);
	if(m < 0)
		m = (m * -1);
	_putchar(m + '0');
	return (m);
}
