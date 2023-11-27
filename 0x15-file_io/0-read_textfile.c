#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file to be read.
 * @letters: the number of letters it should read and print.
 * Return:  the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nrd, nwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file_d, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(file_d);

	free(buffer);

	return (nwr);
}
