#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads the textfile & prints it to POSIX S/O
 * @filename: name of the file to be read
 * @letters: the no of letters to be read and printed
 *
 * Return: actual no of letters it could read & print on success, OR 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, r;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
