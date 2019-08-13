#include "holberton.h"

/**
 * append_text_to_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int final_out;
	int x;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
	return (-1);
	if (text_content == NULL)
		return (1);

	for (x = 0; *(text_content + x) != '\0'; x++)
		final_out = write(file, text_content, x);
	if (final_out == -1)
		return (-1);
	return (1);
}
