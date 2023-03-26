#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	_printf(const char *format, ...);
int	validate(va_list args, char type);
int	_putchar(char c);
int	_putstr(const char *s);

#endif
