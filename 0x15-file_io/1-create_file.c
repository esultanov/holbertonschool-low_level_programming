#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, st, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;
		st = write(fd, text_content, count);
		if (st == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
