#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFFER_SIZE 1204

/**
 * main - Function that copies the content of a file to another file
 * @argc: argument of count
 * @argv: argument of array
 * Return: exit_success if success, exit error 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *file_from;
	char *file_to;
	int fdread;
	int fdwrite;
	int cfile = 0;
	ssize_t rd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdread = open(file_from, O_RDONLY);
	if (fdread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdwrite = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fdwrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((rd = read(fdread, buffer, BUFFER_SIZE)))
		write(fdwrite, buffer, rd);
	if (close(fdread))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdread);
		cfile = 1;
	}
	if (close(fdwrite))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwrite);
		cfile = 1;
	}
	if (cfile)
		exit(100);
	exit(EXIT_SUCCESS);
}
