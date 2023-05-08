#include "main.h"
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * print_usage_and_exit - prints usage message and exit
 */
void print_usage_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * print_error_and_exit - prints error message and exit
 * @error_msg: a string containing an error message that will be printed
 * @filename: a string representing the name of a file that may be
 * involved in an error condition
 * @fd: integer that identifies an opened file or input/output resource
 */
void print_error_and_exit(const char *error_msg, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, error_msg, filename);
	if (fd != -1)
	{
		close(fd);
	}
	exit(errno);
}
/**
 * main - check if the right number of arguments is passed
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 * Return: If fails, print an error message indicating that the file
 * can't be written to
 */
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (argc != 3)
	{
		print_usage_and_exit();
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit("%s\n", file_from, -1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error_and_exit("%s\n", file_to, fd_from);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit("%s\n", file_to, fd_from);
	}
	if (bytes_read == -1)
		print_error_and_exit("%s\n", file_from, fd_to);
	if (close(fd_from) == -1)
		print_error_and_exit("%d\n", file_from, fd_to);
	if (close(fd_to) == -1)
		print_error_and_exit("%d\n", file_to, fd_from);
	return (0);
}
