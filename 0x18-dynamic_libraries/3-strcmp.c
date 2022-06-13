#include "main.h"
/**
* _strcmp - compares two strings
* @s1: string to be compared
* @s2: string to compare
* Return: comparison
*/
int _strcmp(char *s1, char *s2)
{
	int a;
	int A;

	a = 0;

	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	A = s1[a] - s2[a];
	return (A);
}
