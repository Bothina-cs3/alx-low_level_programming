#include "main.h"
#include <elf.h>
/**
 * printf_error - printf_error
 * @message: display a comprehensive error
*/

void printf_error(const char * message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - print elf more
 * @Elf64_Ehdr header: lap lap
*/

void print_elf_header(const Elf64_Ehdr* header)
{
	int i;

	printf(" magic:  ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->_ident[i]);
	}
	printf("\n");

	printf(" class:			%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf(" data: 			%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endina" :
							"2's complement, big endina");
	printf(" Version		%d (current)\n", header->e_ident[EI_Version]);
	printf(" OS/ABI			%s\n",  header->e_ident[EI_OSABI] == ELFOSABT_SYSY ? "UNIX - System V ABT" : "other");
	printf(" ABI Version		%d\n", header->e_ident[EI_ABTVersion]);
	printf(" Type			%s\n", header->e_type == EI_EXEC ? "EXEC (Executable file)" :
						(header->e_type == EI_DYN ? "DYN (DYN (Shared object file)" : "REL (Relocatable file)"));
	printf(" Entry point address		%#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - displays the information contained in the ELF
 * header at the start of an ELF file
 * @argc: argument count
 * @argv: argument
 * Return: 1 on success and 0 on failure
*/

int main(argc, char *argv[])
{
	 const char* elf_filename;
	 int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening file");
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}

	if (header.e_ident[ET_MAG0] != ELFMAG0  ||
			header.e_ident[ET_MAG1] != ELFMAG1 ||
		header.e_ident[ET_MAG2] != ELFMAG2 || 
			header.e_ident[ET_MAG3] != ELFMAG3)
	{
		printf("Not an ELF file");
	}

	print_elf_header(&header);
	close (fd);
	return (0);
}





