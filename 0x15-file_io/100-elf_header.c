#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* print_error - Prints error message and exits with code 98
* @msg: The error message
*/
void print_error(char *msg)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(98);
}
/**
* print_elf_header - Prints information contained in the ELF header
* @header: Pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("Magic:");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("Class:");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
printf("Data:");
switch (header->e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}
printf("Version:");
switch (header->e_ident[EI_VERSION])
{
case EV_NONE:
printf("invalid version\n");
break;
case EV_CURRENT:
printf("%d (current)\n", EV_CURRENT);
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_VERSION]);
}
printf("OS/ABI:");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone (embedded) application\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (Unknown type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", header->e_type);
}
printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}
/**
* main - Displays the information contained in the ELF header of a file
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 on success, or the corresponding exit code on failure
*/
int main(int argc, char *argv[])
{
int fd;
ssize_t bytes_read;
Elf64_Ehdr header;
if (argc != 2)
print_error("Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error: Can't open file");
bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1)
{
close(fd);
print_error("Error: Can't read from file");
}
else if (bytes_read < (ssize_t)sizeof(header))
{
close(fd);
print_error("Error: File too short");
}
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
close(fd);
print_error("Error: Not an ELF file");
}
print_elf_header(&header);
close(fd);
return (0);
}
