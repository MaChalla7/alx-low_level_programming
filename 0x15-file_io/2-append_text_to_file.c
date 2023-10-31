#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a FILE
 * @filename: Pointer to the FILENAME
 * @text_content: The content added
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ema;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	ema = open(filename, O_WRONLY | O_APPEND);

	if (ema == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(ema, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(ema);

	return (1);
}
