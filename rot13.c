#include "main.h"

/**
  * _rot13 - Return the reverse of a string
  *
  *@str: string pointer
  *
  *Return: reversed string
  *
 **/

char *_rot13(char *str)
{
	unsigned int x, length, typecon;
	char *newstr;

	length = _strlength(str);
	newstr = malloc((length + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{
		typecon = str[x];
		if (typecon >= 65 && typecon <= 90)
		{
			if ((typecon + 13) <= 90)
				newstr[x] = (typecon + 13);
			else
				newstr[x] = (typecon - 13);
		}
		else if (typecon >= 97 && typecon <= 122)
		{
			if ((typecon + 13) <= 122)
				newstr[x] = (typecon + 13);
			else
				newstr[x] = (typecon - 13);
		}
		else
			newstr[x] = str[x];
		x++;
	}
	newstr[x] = '\0';
	return (newstr);
}
