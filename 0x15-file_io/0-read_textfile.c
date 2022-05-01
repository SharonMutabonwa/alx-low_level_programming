#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the name of the file
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t n;

	fp = fopen("filename.txt", "r");

	if (fp == NULL || filename == NULL)
	{
		return (0);
	}
	fprintf("%li\n", letters);

	if (!n)
	{
		return (0);
	}
	fclose(fp);
	return (n);
}
