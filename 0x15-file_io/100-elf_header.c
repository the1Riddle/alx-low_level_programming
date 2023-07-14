#include "main.h"
/**
 * write_str - Writes a string to a file descriptor
 * @fd: File descriptor
 * @str: String to write
 */
void write_str(int fd, const char *str)
{
	write(fd, str, strlen(str));
}

/**
 * write_hex - Writes a hexadecimal value to a file descriptor
 * @fd: File descriptor
 * @value: Hexadecimal value
 */
void write_hex(int fd, unsigned char value)
{
	char hex[3];

	snprintf(hex, sizeof(hex), "%02x", value);
	write_str(fd, hex);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	char usage_msg[] = "Usage: ";
	char error_msg[] = "Error: Can't read file ";
	char elf_header_msg[] = "ELF Header:\n";
	unsigned char e_ident[EI_NIDENT];

	if (argc < 2)
	{
	write_str(STDERR_FILENO, usage_msg);
	write_str(STDERR_FILENO, argv[0]);
	write_str(STDERR_FILENO, " <elf-file>\n");
	exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
	write_str(STDERR_FILENO, error_msg);
	write_str(STDERR_FILENO, argv[1]);
	write_str(STDERR_FILENO, "\n");
	exit(98);
	}

	if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
	{
	close_elf(fd);
	write_str(STDERR_FILENO, "Error: Failed to read ELF header\n");
	exit(98);
	}

	check_elf(e_ident);
	write_str(STDOUT_FILENO, elf_header_msg);
	print_info(e_ident);

	close_elf(fd);
	return (0);
}
