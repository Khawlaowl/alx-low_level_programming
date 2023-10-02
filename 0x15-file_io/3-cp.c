#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * error_exit - Exits the program with an error message.
 * @exit_code: The exit code to use.
 * @format: The format string for the error message.
 */
void error_exit(int exit_code, const char *format, ...) {
		va_list args;
		va_start(args, format);
		dprintf(STDERR_FILENO, format, args);
		va_end(args);
		exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
		int from_fd, to_fd, r, w;
		char buffer[1024];

		if (argc != 3)
				error_exit(97, "Usage: cp file_from file_to\n");

		from_fd = open(argv[1], O_RDONLY);
		if (from_fd == -1)
				error_exit(98, "Error: Can't read from file %s\n", argv[1]);

		to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (to_fd == -1)
				error_exit(99, "Error: Can't write to %s\n", argv[2]);

		while ((r = read(from_fd, buffer, sizeof(buffer))) > 0) {
				w = write(to_fd, buffer, r);
				if (w == -1)
						error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}

		if (r == -1)
				error_exit(98, "Error: Can't read from file %s\n", argv[1]);

		if (close(from_fd) == -1)
				error_exit(100, "Error: Can't close fd %d\n", from_fd);

		if (close(to_fd) == -1)
				error_exit(100, "Error: Can't close fd %d\n", to_fd);

		return (0);
}
