#include "main.h"

/**
* main - copies the content of a file to another file.
* @argc: count argument
* @argv: vector argument
* Return: 0 always (success)
*/

int main(int argc, char *argv[])
{
	int o, r, s, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o = open(argv[1], O_RDONLY);
	if (o < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	s = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(o, buf, BUFSIZ)) > 0)
	{
		if (s < 0 || write(s, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(o);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(o);
	b = close(s);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s);
		exit(100);
	}
	return (0);
}


