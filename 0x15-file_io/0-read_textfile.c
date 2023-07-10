#include "main.h"
/**
 * read_textfile - the entry point
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 *
 * Description: a function that reads a text file and,
 * prints it to the POSIX standard output
 *
 * Return: the actual number of letters it could read and print or,
 * 0 when file can not be opened or read,
 * filename is NULL or when write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytesR, bytesW;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	bytesR = read(fd, buff, letters);
	bytesW = write(STDOUT_FILENO, buff, bytesR);

	free(buff);
	close(fd);

	return (bytesW);
}
