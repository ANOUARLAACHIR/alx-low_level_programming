#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 *
 * @n: Return n, -n otherwise
 * Return: n, -n otherwise
 */

void jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
		}
		_putchar('\n');
	}
}
