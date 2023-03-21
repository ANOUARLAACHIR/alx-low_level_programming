#include "main.h"

/**
 * int _islower - prints the alphabet, in lowercase.
 *
 * Return: 0 always
 **/

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
