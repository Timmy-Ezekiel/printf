#ifndef _MAIN_H_
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printf - struct for printer functions
 * @type_arg: identifier
 * @printf: pointer to the printer functions
 *
 * Description: struct that stores pointers to the
 * printf functions.
 */

typedef struct printf
{
	char *type_arg;
	int (*printf)(va_list, char *, unsigned int);
} print_t;

int print_int(va_list arguments, char *buf, unsigned int ibuf);
int _strlength(char *str);
int _printf(const char *format, ...);
char *_rot13(char *str);


#endif
