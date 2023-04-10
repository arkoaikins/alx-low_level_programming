#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: 0 if filename is null or if write fails or does not i
 *         write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_desc;
	ssize_t n_read;
	ssize_t	n_written;
	char *data_buf;

	if (filename == NULL)
		return (0);
	f_desc = open(filename, O_RDONLY);
	if (f_desc == -1)
		return (0);
	data_buf = malloc(sizeof(char) * letters);
	if (data_buf == NULL)
	{
		close(f_desc);
		return (0);
	}
	n_read = read(f_desc, data_buf, letters);
	close(f_desc);
	if (n_read == -1)
	{
		free(data_buf);
		return (0);
	}
	n_written = write(STDOUT_FILENO, data_buf, n_read);
	free(data_buf);
	if (n_read != n_written)
		return (0);
	return (n_written);
}
