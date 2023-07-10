#include "main.h"

/**
 * close_file - a func that closes file
 * @fd: the file descripter
 *
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - the entry point
 * @argv: pointer to the arguments
 * @argc: number of arguments passed
 *
 * Description: this is program that copies the content of a file to another
 * file.
 * if the number of argumments are not the same then it exits with code
 * 97.
 * if the file exists then it's trancated to the file being copied to that
 * is file_to.
 * if the file to be copied from does not exist or cannot be read
 * then it exits with code 98.
 * if the file_to cannot be written on or created then it exits with code 99.
 * if the file descriptor cant be closed then is
 * exited with code 100 and finally it exits with code 1 if the contents read
 * is not the same as the contents writen.
 *
 * Return: 0 for main funcs (success)
 */
int main(int argc, char *argv[])
{
	ssize_t bytesW, bytesR;
	int file_from, file_to;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bytesR > 0)
	{
		bytesR = read(file_from, buff, BUFF_SIZE);
		if (bytesR == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytesW = write(file_to, buff, bytesR);
		if (bytesW != bytesR)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
