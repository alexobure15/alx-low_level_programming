#include "main.h"

/**
 * create_buffer - func that allocates about 1024 bytes for a buff
 * @file: file name
 * Return: the created buff
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - function that closes file copied file
 * @fdescriptor: file descriptor to be evaluated
 */
void close_file(int fdescriptor)
{
	int i;

	i = close(fdescriptor);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdescriptor);
		exit(100);
	}
}

/**
 * main - a program that copies the content from one file to the other
 * @argc: arguments c
 * @argv: array of args to be evaluated
 * Return: On success return 0 othewise
 * If there is incorrect arg count - exit code 97 or
 * If file_from doesn't exist or is un read - exit code 98 or
 * if file_to cann't be written or created - exit code 99 or
 * If file_from or file_to cann't be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buff);
	close_file(f);
	close_file(t);
	return (0);
}
