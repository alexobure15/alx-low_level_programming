#include "main.h"

/**
 *create_file - func that creates a file
 *@filename: name of  file to create
 *@text_content: string to write
 *Return: on success return 1 or  -1 on fail
 */


int create_file(const char *filename, char *text_content)
{
	ssize_t fdescriptor, w;
	int leng;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	leng = strlen(text_content);
	fdescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdescriptor, text_content, leng);

	if (fdescriptor == -1 || w == -1)
		return (-1);

	close(fdescriptor);
	return (1);

}
