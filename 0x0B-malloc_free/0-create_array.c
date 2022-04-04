#include "main.h"
#include <stdio.h>

/**
* *create_array - creates an array of chars
* and initializes it with a specific char
* @c: pointer to array
* @size: size of char
* Return NULL if size = 0 || a pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	int i;

	if ((size == 0) || (size != 0 && size != i))
	{
		return NULL;
	}
	for (i = 0; size > 0; i++)
	{
		printf("%c\n", c);
	}
}
