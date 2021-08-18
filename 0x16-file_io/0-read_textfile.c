#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file pointer
 * @text_content: pointer to string intended for the new file
 *
 * Return: -1 on fail, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int status;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	status = write(fd, text_content, strlen(text_content));

	if (status == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
