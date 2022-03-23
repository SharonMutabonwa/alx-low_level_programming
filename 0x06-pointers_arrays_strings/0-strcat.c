#include "main.h"

/**
* *_strcat - appends the src string to the dest string
* @src: string to be concatenated to dest
* @dest: string for concatenation
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		i++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;

	}
	dest[b] = '\0';
	return (dest);
}
