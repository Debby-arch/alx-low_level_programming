#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s: integer to check length
 * Return: void
 */
int _strlen(char *s)
{
	int len;
	char *str = s;

	for (len = 0; *str; str++, len++)
		;
	return (len);
}
