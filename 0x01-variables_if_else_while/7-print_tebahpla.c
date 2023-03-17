#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * Author: Anouar LAACHIR
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
