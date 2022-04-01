#include <stdio.h>
#include "main.h"

/**
* main - prints its name, followed by a new line.
* @argc: count argument
* @argv: the vector argument
* Return: 0 always (success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

