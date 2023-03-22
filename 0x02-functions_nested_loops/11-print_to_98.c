#include "main.h"

/**
 * print_to_98 : function that prints all natural numbers from n to 98, + new line
 *
 * @n : integer
 */

void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		for(i = n; i <= 98; i++)
		{
			if (i == 98)
				_putchar(i);
			else
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else 
	{
		for(i = n; i >= 98; i--)
		{
			if (i == 98)
				_putchar(i);
			else
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
