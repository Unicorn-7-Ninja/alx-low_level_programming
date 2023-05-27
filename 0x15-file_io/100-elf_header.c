#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if the file is a valid ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, it exits with code 98.
 */
void check_elf(unsigned char *e_ident)
{
    if (e_ident[EI_MAG0] != ELFMAG0 ||
        e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 ||
        e_ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(98);
    }
}

/**
 * print_magic - Prints the magic numbers.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
    printf(" Magic: ");

    for (int index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", e_ident[index]);

        if (index != EI_NIDENT - 1)
            printf(" ");
    }

    printf("\n");
}

/**
 * print_class - Prints the class of the ELF file.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
    printf(" Class: ");

    switch (e_ident[EI_CLASS])
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
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
        break;
    }
}

/**
 * print_data - Prints the data encoding of the ELF file.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
    printf(" Data: ");

    switch (e_ident[EI_DATA])
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
        printf("<unknown: %x>\n", e_ident[EI_DATA]);
        break;
    }
}

/**
 * print_version - Prints the version of the ELF file.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
    printf(" Version: %d", e_ident[EI_VERSION]);

    switch (e_ident[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

/**
 * print_osabi - Prints the OS/ABI of the ELF file.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_ident)
{
    printf(" OS/ABI: ");

    switch (e_ident[EI_OSABI])
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
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
        break;
    }
}

/**
 * print_abi - Prints the ABI version of the ELF file.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
    printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of the ELF file.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
    if (e_ident[EI_DATA] == ELFDATA2MSB)
        e_type = (e_type >> 8);

    printf(" Type: ");

    switch (e_type)
    {
    case ET_NONE:
        printf("NONE (None)\n");
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
        printf("<unknown: %x>\n", e_type);
        break;
    }
}

/**
 * print_entry - Prints the entry point address of the ELF file.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf(" Entry point address: ");

    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)e_entry);
    else
        printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes the ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed, it exits with code 98.
 */
void close_elf(int elf)
{
    if (close(elf) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
        exit(98);
    }
}

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
    int elf;
    ssize_t bytes_read;
    unsigned char e_ident[EI_NIDENT];

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s <ELF-file>\n", argv[0]);
        return 1;
    }

    elf = open(argv[1], O_RDONLY);
    if (elf == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
        return 1;
    }

    bytes_read = read(elf, e_ident, EI_NIDENT);
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close_elf(elf);
        return 1;
    }

    check_elf(e_ident);
    print_magic(e_ident);
    print_class(e_ident);
    print_data(e_ident);
    print_version(e_ident);
    print_osabi(e_ident);
    print_abi(e_ident);

    if (lseek(elf, EI_NIDENT, SEEK_SET) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't lseek to section header\n");
        close_elf(elf);
        return 1;
    }

    Elf64_Ehdr header;
    bytes_read = read(elf, &header, sizeof(header));
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
        close_elf(elf);
        return 1;
    }

    print_type(header.e_type, e_ident);
    print_entry(header.e_entry, e_ident);

    close_elf(elf);
    return 0;
}
