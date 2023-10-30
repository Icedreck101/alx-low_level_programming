#include "main.h"
#include <stdio.h>

/**
* error_file - Checks if files can be opened.
* @file_from: File descriptor for the source file.
* @file_to: File descriptor for the destination file.
* @argv: Arguments vector.
*
* This function checks if the source and destination files can be opened and
* exits the program with the appropriate error code and message if not.
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
* main - The main function for the cp program.
* @argc: Number of arguments.
* @argv: Arguments vector.
*
* This program copies the content of one file to another file.
* Return: 0 on success, or the appropriate error code on failure.
*/
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t nchars, nwr;
char buf[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
error_file(file_from, file_to, argv);

while ((nchars = read(file_from, buf, 1024)) > 0)
{
if (nchars == -1)
error_file(-1, 0, argv);
nwr = write(file_to, buf, nchars);
if (nwr == -1)
error_file(0, -1, argv);
}

err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}

