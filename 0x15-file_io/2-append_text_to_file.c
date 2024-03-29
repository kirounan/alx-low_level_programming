#include "main.h"

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename to open
 * @text_content: text content will be added to the file
 * Return: 1 if success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
