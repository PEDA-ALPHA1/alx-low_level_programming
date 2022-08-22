#include "main.h"
/**
 * read_textfile - function prototype
 * @filename: Argument to hold name of file
 * @letters: Argument to hold number of letters it should read and print
 * Return: 0 if file cannot be opened or filename is NULL
 * Else return actual number of letters it could read and print
 *
 * ********************************************************************
 * Description: function that reads a text file
 * And prints it to the POSIX standard output.
 * ********************************************************************
 * **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
