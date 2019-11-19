#include "holberton.h"
/**
 * read_textfile - print count of letters.
 * @filename: file name argv.
 * @letters: counter.
 * Return: how many letters have.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDWR);
	char *buf;
	ssize_t readnum, writenum;

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(letters));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	readnum = read(fd, buf, letters);
	if (readnum == -1)
		return (0);
	writenum = write(STDOUT_FILENO, buf, readnum);
	if (writenum == -1 || readnum != writenum)
		return (0);
	free(buf);
	close(fd);
	return (writenum);
}
