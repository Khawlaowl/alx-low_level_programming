#include "main.h"

/**
 * create_file - Creates file
 * @filename: name of the file to create.
 * @text_content: NULL-terminated strg
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int kh, w, lg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg];)
			lg++;
	}

	kh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(kh, text_content, lg);

	if (kh == -1 || w == -1)
		return (-1);

	close(kh);

	return (1);
}
