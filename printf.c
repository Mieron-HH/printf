#include "main.h"
/**
 * _printf - a function that prints parameter passed to it
 * @format: a string input
 * Return: the total count of the characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
				count += _putchar(*(++format));
			else
				count += validate(args, *(++format));
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
