#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append text on
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Description: if text_content is NULL then nothing is added to the file.
 * the fund also returns -1 if the file does not exist or,
 * if one does not have the required permissions to write the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesW;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	bytesW = write(fd, text_content, strlen(text_content));
	close(fd);

	if (bytesW == -1)
	{
		return (-1);
	}

	return (1);
}
