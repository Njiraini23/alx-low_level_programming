#include "main.h"
#include <stdlib.h>

/**
*read_textfile -creates a file
*@filename: the name of the file
*@letters: the letters in the file
*
*Return: 1 or -1
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t 0, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(0, buffer, letters);
	w = write(STDOUT_FILENO, buffer,r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return(0);
	}
	free(buffer);
	close(o);

	return (w);
}

