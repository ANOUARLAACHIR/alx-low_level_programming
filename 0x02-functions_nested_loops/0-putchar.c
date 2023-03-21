#include "main.h"

/**
 * prints _putchar, followed by a new line
 *
 * return 0 (Always).
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
