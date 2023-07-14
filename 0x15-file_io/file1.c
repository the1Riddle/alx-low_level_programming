#include "main.h"
/**
 * check_elf - Checks if the provided data is an ELF file
 * @e_ident: Pointer to the ELF identification data
 *
 * Description: This function verifies if the given data represents an ELF file
 * by checking the ELF magic number in the identification header.
 */
void check_elf(unsigned char *e_ident)
{
	char error_msg[] = "Error: Not an ELF file\n";
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
		e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
	write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
	exit(98);
	}
}

/**
 * close_elf - Closes the file descriptor for an ELF file
 * @elf: File descriptor of the ELF file
 *
 * Description: This function closes the file descriptor associated with the
 * provided ELF file. If an error occurs, it prints an error message along with
 * the file descriptor value and exits with status 98.
 */
void close_elf(int elf)
{
	char error_msg[] = "Error: Can't close fd ";
	char fd_str[16];

	if (close(elf) == -1)
	{
	write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
	snprintf(fd_str, sizeof(fd_str), "%d\n", elf);
	write(STDERR_FILENO, fd_str, strlen(fd_str));
	exit(98);
	}
}
