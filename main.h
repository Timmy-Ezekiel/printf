#ifndef HEAD_F
#define HEAD_F

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _strlength(char *str);
int _printf(const char *format, ...);
char *_rot13(char *str);
#endif
