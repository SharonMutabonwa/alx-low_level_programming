#include "main.h"

/**
* _strlen - returns the length of a string
*@s: the variable
*Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
