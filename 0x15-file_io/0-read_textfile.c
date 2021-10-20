#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cp; /* file decriptor*/
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	cp = open(filename, O_RDONLY);
	if (cp == -1)
		return (0);


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(cp, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(cp);
		return (0);
	}


	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(cp);
		return (0);
	}

	close(cp);
	return (n_read);

}
