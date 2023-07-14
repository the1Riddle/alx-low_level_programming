#include "main.h"
/**
 * print_info - Prints information about ELF header.
 * @e_ident: Pointer to the ELF identification bytes.
 *
 * Description: This function prints various information about the ELF header,
 * such as the class, data encoding, version, OS/ABI, ABI version, and magic number.
 */
void print_info(unsigned char *e_ident)
{
	char class_msg[] = "Class: ";
	char data_msg[] = "Data: ";
	char version_msg[] = "Version: ";
	char osabi_msg[] = "OS/ABI: ";
	char abi_version_msg[] = "ABI Version: ";
	char unknown_msg[] = "<unknown: ";
	char magic_msg[] = "Magic: ";
	int i;

	const char *osabi_strings[] = {
	"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD", "UNIX - Linux",
	"UNIX - Solaris", "UNIX - IRIX", "UNIX - FreeBSD", "UNIX - TRU64",
	"ARM", "Standalone App"
	};

	write_str(STDOUT_FILENO, magic_msg);
	for (i = 0; i < EI_NIDENT; i++)
	{
	write_hex(STDOUT_FILENO, e_ident[i]);
	write_str(STDOUT_FILENO, " ");
	}
	write_str(STDOUT_FILENO, "\n");
	write_str(STDOUT_FILENO, class_msg);
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	write_str(STDOUT_FILENO, "none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	write_str(STDOUT_FILENO, "ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	write_str(STDOUT_FILENO, "ELF64\n");
	else
	{
	write_str(STDOUT_FILENO, unknown_msg);
	write_hex(STDOUT_FILENO, e_ident[EI_CLASS]);
	write_str(STDOUT_FILENO, ">\n");
	}

	write_str(STDOUT_FILENO, data_msg);
	if (e_ident[EI_DATA] == ELFDATANONE)
	write_str(STDOUT_FILENO, "none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
	write_str(STDOUT_FILENO, "2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
	write_str(STDOUT_FILENO, "2's complement, big endian\n");
	else
	{
	write_str(STDOUT_FILENO, unknown_msg);
	write_hex(STDOUT_FILENO, e_ident[EI_DATA]);
	write_str(STDOUT_FILENO, ">\n");
	}
	write_str(STDOUT_FILENO, version_msg);
	write_hex(STDOUT_FILENO, e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
	write_str(STDOUT_FILENO, " (current)");
	}
	write_str(STDOUT_FILENO, "\n");
	write_str(STDOUT_FILENO, osabi_msg);
	if (e_ident[EI_OSABI] >= ELFOSABI_NONE && e_ident[EI_OSABI] < ELFOSABI_STANDALONE)
		write_str(STDOUT_FILENO, osabi_strings[e_ident[EI_OSABI]]);
	else
	{
	write_str(STDOUT_FILENO, unknown_msg);
	write_hex(STDOUT_FILENO, e_ident[EI_OSABI]);
	write_str(STDOUT_FILENO, ">\n");
	}
	write_str(STDOUT_FILENO, abi_version_msg);
	write_hex(STDOUT_FILENO, e_ident[EI_ABIVERSION]);
	write_str(STDOUT_FILENO, "\n");
}
