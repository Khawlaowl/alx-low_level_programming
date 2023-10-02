#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: A NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int kh, w;
	int lg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (lg = 0; text_content[lg];)
		lg++;

	kh = open(filename, O_WRONLY | O_APPEND);
	if (kh == -1)
		return (-1);

	w = write(kh, text_content, lg);

	if (w == -1)
	{
		close(kh);
		return (-1);
	}

	close(kh);

	return (1);
}
