#include "main.h"

/**
 * read_textfile - func that reads and prints a file to the
 * posix stdo
 *
 * @filename: the file to read
 * @letters: the size of the number to read
 *
 * Return: number of letters read and printed and 0 if
 * Null or fails to write expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdescriptor;
	ssize_t w;
	ssize_t r;
	char *buff;

	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fdescriptor, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fdescriptor);

	return (w);
}

