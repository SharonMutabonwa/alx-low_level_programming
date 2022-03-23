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

	for (a = 0; src[a] != '\0'; a++)
	{
		for (b = 0; dest[b] != '\0'; b++)
		{
			_putchar(b);
		}
		dest[b] = src[a];
	}
	dest[b] != '\0';
	return (dest);
}
