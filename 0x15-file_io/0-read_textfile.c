#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the name of the file
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fh, r, w;
	char *buffer;

	fh = open(filename, O_RDONLY);

	if (!fh || filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(fh, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fh);
	return (w);
}
