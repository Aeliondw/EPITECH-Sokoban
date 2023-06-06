/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Open, read, close file
*/

#include "../include/my_sokoban.h"

int f_open(char const *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        write(1, "Open file failure\n", 18);
        return -1;
    }
    return fd;
}

void read_error(int r, int size)
{
    if (r == -1)
        write(1, "Read failed\n", 12);
    if (r == 0)
        write(1, "Read has nothing more to read\n", 30);
    if (r < size)
        write(1, "Read didn't complete the entire buffer\n", 39);
}

char *f_read(int fd, char const *filename)
{
    struct stat s;
    stat(filename, &s);
    int size = s.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    int r = read(fd, buffer, size);
    read_error(r, size);
    buffer[size] = '\0';
    return buffer;
}

void f_close(int fd)
{
    close(fd);
}
