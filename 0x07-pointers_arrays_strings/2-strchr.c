#include "main.h"
#include <stddef.h>
/**
* *_strchr - locates a character in a string.
* @s: string to search
* @c: character to locate
* Return: a pointer to the first occurrence of the character c
* in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	do {
		*s++;
	}
	while (*s);
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s != c)
		{
			return (NULL);
		}
	}
}
