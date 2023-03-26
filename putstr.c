#include "main.h"
/**
 * _putstr - a function that prints any givne string
 * @s: a string input
 * Return: the count length of the given string
 */
int	_putstr(const char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		write(1, &(*s), 1);
		count++;
		s++;
	}
	return (count);
}

