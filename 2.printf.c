#include "main.h"

/**
  *_printf - Produce output according to a format
  *
  * @format: String of character
  * @...: Ellipse (Indefinite Variable)
  *
  * Return: Integer
  *
 **/

int _printf(const char *format, ...)
{
	unsigned int x, total = 0, strlen;
	char *longString;
	char ch;
	va_list list;

	va_start(list, format);
	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			switch (format[x])
			{
				case 'c':
				ch = va_arg(list, int);
				write(1, &ch, sizeof(char));
				total += 1;
				break;
				case 's':
				longString = va_arg(list, char *);
				strlen = _strlength(longString);
				total += strlen;
				write(1, longString, (strlen));
				break;
				case 'R':
				longString = _rot13(va_arg(list, char *));
				strlen = _strlength(longString);
				total += strlen;
				write(1, longString, (strlen));
				free(longString);
				break;
			}
			x++;
			continue;
		}
		total += 1;
		ch = format[x];
		write(1, &ch, 1);
		x++;
	}
	va_end(list);
	return (total - 1);
}
