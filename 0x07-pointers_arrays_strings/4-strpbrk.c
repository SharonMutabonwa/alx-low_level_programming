#include "main.h"
#include <stdio.h>
/**
* *_strpbrk - searches a string for any of a set of bytes.
* @s: string to evaluate
* @accept: string containing the list of characters to match in s
*
* Return: the number of bytes in the initial segment
* of s which consist only of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
