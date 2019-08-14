#include "holberton.h"

#define BUFFER_SIZE 1024
/**
 * close_w - close function
 * @fdread: read
 * @fdwrite: write
 */
void close_w(int fdread, int fdwrite)
{
	if (close(fdwrite) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwrite);
		exit(100); }
	if (close(fdread) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdread);
		exit(100); }
}

/**
 * main - Function that copies the content of a file to another file
 * @argc: argument of count
 * @argv: argument of array
 * Return: exit_success if success, exit error 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;
	int fdread, fdwrite;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = argv[1];
	file_to = argv[2];
	fdread = open(file_from, O_RDONLY);
	if (fdread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fdwrite = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fdwrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fdread, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98); }
		wr = write(fdwrite, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99); }}
	close_w(fdread, fdwrite);
	return (0);
}
