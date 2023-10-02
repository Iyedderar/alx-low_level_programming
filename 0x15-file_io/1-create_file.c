#include "main.h"
/**
 * create_file - create a file.
 * @text_content: the content of the file .
 * @filename : the name of the file.
 * 
 * 
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(STDOUT_FILENO, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
