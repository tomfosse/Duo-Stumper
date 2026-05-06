/*
** EPITECH PROJECT, 2026
** parse_file.c
** File description:
** parse file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

char *parse_file(char *filepath)
{
    char *buffer = NULL;
    int fd = 0;
    struct stat sb;
    int return_value = 0;

    if (!filepath)
        return NULL;
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    return_value = lstat(filepath, &sb);
    if (return_value == -1)
        return NULL;
    buffer = malloc(sb.st_size + 1);
    if (!buffer)
        return NULL;
    read(fd, buffer, sb.st_size);
    buffer[sb.st_size] = '\0';
    close(fd);
    return buffer;
}
