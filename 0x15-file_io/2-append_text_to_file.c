#include "main.h"

/**
 * append_text_to_file - func that appends text
 * to the end of an existing file
 *
 * @filename: name of the file to be determined
 *
 * @text_content: the text to be added to the file
 *
 * Return: On Success return 1 or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdescriptor, leng, w = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fdescriptor = open(filename, O_WRONLY | O_APPEND);
	w = write(fdescriptor, text_content, leng);

	if (fdescriptor == -1 || w == -1)
		return (-1);

	close(fdescriptor);

	return (1);

}

