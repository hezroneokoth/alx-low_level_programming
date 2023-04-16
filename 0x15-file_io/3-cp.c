#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
 * copy_file - copies the content of one file to another
 * @file_from: the path of the source file
 * @file_to: the path of the destination file
 *
 * Return: 0 on success, OR
 * 97 if the wrong no of arguments were provided, OR
 * 98 if source file couldnt be read, OR
 * 99 if destination file couldnt be written, OR
 * 100 if a file descriptor could not be closed
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_ret, write_ret;
	char buffer[BUFFER_SIZE];

	if (!file_from || !file_to)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}
	do {
		read_ret = read(fd_from, buffer, BUFFER_SIZE);
		if (read_ret == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close(fd_from);
			close(fd_to);
			return (98);
		}
		write_ret = write(fd_to, buffer, read_ret);
		if (write_ret == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	} while (read_ret > 0);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error:  Can't close fd %d\n", (close(fd_from) == -1 ? fd_from : fd_to));
		return (100);
	}
	return (0);
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 *
 * Return: 0 on success, OR
 * a non-zero error code if something went wrong
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	return (copy_file(argv[1], argv[2]));
}
