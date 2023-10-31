#include "main.h"

/**
 * create_file - Create a FILE.
 * @filename: Pointer to the FILENAME to create
 * @text_content: Text Content written in the FILE.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int j, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(j, text_content, len);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}