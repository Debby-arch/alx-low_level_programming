#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case, followed by a new line
 * Return : 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
