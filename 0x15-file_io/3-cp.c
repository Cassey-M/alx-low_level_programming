#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* error_97 - Prints error message and exits with code 97
*/
void error_97(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/**
* error_98 - Prints error message and exits with code 98
* @file: Name of the file
*/
void error_98(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
/**
* error_99 - Prints error message and exits with code 99
* @file: Name of the file
*/
void error_99(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
/**
* error_100 - Prints error message and exits with code 100
* @fd: File descriptor value
*/
void error_100(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
/**
* main - Copies the content of a file to another file
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 on success, or the corresponding exit code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
error_97();
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_98(argv[1]);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_99(argv[2]);
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
error_99(argv[2]);
}
if (bytes_read == -1)
error_98(argv[1]);
if (close(fd_from) == -1)
error_100(fd_from);
if (close(fd_to) == -1)
error_100(fd_to);
return (0);
}
