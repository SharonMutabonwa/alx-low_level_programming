#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @c: char to initialize the array
* @size: size of an array to create
* Return NULL if size = 0 || a pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
