/*
** EPITECH PROJECT, 2026
** send_to_file.c
** File description:
** send to file
*/

#include <stdio.h>
#include <sys/stat.h>
#include "cesar.h"

int write_into_file(char *message)
{
    FILE *file = NULL;
    char *file_name = "crypt";

    if (!message || !file_name)
        return EXIT_ERROR;
    file = fopen(file_name, "w");
    if (!file)
        return EXIT_ERROR;
    for (int i = 0; message[i]; i++)
        fprintf(file, "%c", message[i]);
    fclose(file);
    chmod(file_name, S_IRUSR | S_IRGRP | S_IROTH);
    return 0;
}
