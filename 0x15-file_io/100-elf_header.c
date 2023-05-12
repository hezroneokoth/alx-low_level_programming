#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *emessage);
void print_elf_header_info(const Elf64_Ehdr *elf_header);

/**
 * print_error - prints an error message to stderr,
 * and exits with status code 98
 * @emessage: the error message to be printed
 */
void print_error(const char *emessage)
{
	fprintf(stderr, "%s\n", emessage);
	exit(98);
}

/**
 * print_elf_header_info - prints the info from the ELF header
 * @elf_header: a pointer to the ELF header structure
 */
void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i = 0;
	printf("ELF Header:\n");
	printf("  Magic:   ");

	while (i < EI_NIDENT)
	{
		printf("%02x ", elf_header->e_ident[i]);
		i++;
	}

	printf("\n");
	printf("  Class:                             ");

	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");

	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	else
		printf("<unknown>\n");

	printf("  Data:                              ");

	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");

	else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");

	else
		printf("<unknown>\n");

	printf("  Version:   %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:    %d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:   %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:      %d\n", elf_header->e_type);
	printf("  Entry point address:   %lx\n", elf_header->e_entry);
}

/**
 * main - displays the info contained in the ELF header of an ELF file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, OR 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Error: Cannot read ELF header");

	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error("Error: Cannot reset file offset");

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
