#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
