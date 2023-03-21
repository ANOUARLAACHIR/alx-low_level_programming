#include "main.h"

/**
 * print_sign - a function that checks if a number is 0, positive or negative
 * 
 * Return: 1 if int n is positive, -1 if negative, 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==  0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
