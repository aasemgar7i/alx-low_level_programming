#include "main.h"

/**
* read_textfile - Entry point
* Description: Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to be read
* @letters: The number of letters it should read and print
* Return: The actual number of letters it could read and print
*		if the file can not be opened or read, return 0
*		if filename is NULL return 0
*		if write fails or does not write, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (wr);
}
