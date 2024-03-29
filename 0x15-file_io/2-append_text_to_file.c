#include "main.h"

/**
 * _strlen - checks for string length
 * @str: pointer to the string
 *
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to thr name of file
 * @text_content: string attatched to the end of file
 *
 * Return: -1 on failure 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	y = open(filename, O_WRONLY | O_APPEND);
	if (y == -1)
		return (-1);
	if (text_content != NULL)
		len = write(y, text_content, _strlen(text_content));
	close(y);
	if (len == -1)
		return (-1);
	return (1);
}
