#include <stdio.h>

/**
 * main - Prints all possible comibinaitions of two digits, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1; digit2 < 10; digit2++)
		{
			if (digit1 == digit2)
                                continue;
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
