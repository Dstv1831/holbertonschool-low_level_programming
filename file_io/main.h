#ifndef FILE_H
#define FILE_H

#include <stdlib.h>
#include <fcntl.h>  /* For open() */
#include <unistd.h> /* For read(), write(), close() */

/*
 * Desc: Header file containing prototypes for all functions
 * written in the file_io directory.
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
