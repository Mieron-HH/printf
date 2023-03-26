#include "main.h"
/**
 * validate - a function that checks the flags
 * @args: an argument list
 * @type: a character input
 * Return: the lenght of the printed characters
 */
int validate(va_list args, char type)
{
	if (type == '\0')
		return (0);
	if (type == 'c')
		return (_putchar(va_arg(args, int)));
	if (type == 's')
		return (_putstr(va_arg(args, char const *)));
	return (0);
}
