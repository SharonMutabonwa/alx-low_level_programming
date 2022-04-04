#include <stdlib.h>
#include "main.h"
/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to duplicate
*Return: NULL if str = NULL || if insufficient memory was available
* or a pointer to the duplicated string (On success)
*/
char *_strdup(char *str)
{
	char *a;

	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	a = (char *) malloc(sizeof(char) * (len + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	return (a);
}




