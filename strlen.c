#include "main.h"

/**
  *_strlength - Returns the length of string
  *
  * @str: String passed
  *
  *Return: Integer (Length of String Excluding Null char)
  *
 **/

int _strlength(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlength(str + 1));
}
