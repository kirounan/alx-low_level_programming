#include "main.h"

/**
 *  create_file - create a file and write in it
 * @filename: file to be created
 * @text_content: content will be added to created file
 * Return: 1 if sucess or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		w = write(fd, text_content, len);
	}
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
