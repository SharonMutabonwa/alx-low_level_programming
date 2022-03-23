#include "main.h"

/**
* *_strcat - appends the src string to the dest string
* @src: string to add
* @dest: string to append to
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;

	}
	dest[a] = '\0';
	return (dest);
}
