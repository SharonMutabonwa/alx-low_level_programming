#include "main.h"
/**
* *_strncpy - copies a string
* @dest: destination string
* @src: string to be copied
* @n:number of bytes from src
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
