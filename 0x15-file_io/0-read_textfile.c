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
	FILE *file;
	char *buffer;
	ssize_t bytesR;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesR = fread(buffer, sizeof(char), letters, file);
	fwrite(buffer, sizeof(char), bytesR, stdout);

	free(buffer);
	fclose(file);

	return (bytesR);
}
