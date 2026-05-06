/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The main function's file of the project
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "cesar.h"

static
int file_flag_handling(char *filepath, int key)
{
    char *file_datas = NULL;
    char *string = NULL;

    file_datas = parse_file(filepath);
    if (!file_datas)
        return EXIT_ERROR;
    string = encrypt_str(file_datas, key);
    if (!string)
        return EXIT_ERROR;
    if (write_into_file(string) == EXIT_ERROR)
        return EXIT_ERROR;
    free(string);
    free(file_datas);
    return EXIT_SUCCESS;
}

int main(int ac, char **av)
{
    int key = 0;
    char *string = NULL;

    if (ac != 4)
        return EXIT_ERROR;
    key = atoi(av[3]);
    if (strcmp(av[1], "-f") == EXIT_SUCCESS) {
        if (file_flag_handling(av[2], key) == EXIT_ERROR)
            return EXIT_ERROR;
        return EXIT_SUCCESS;
    }
    if (strcmp(av[1], "-s") == EXIT_SUCCESS) {
        string = encrypt_str(av[2], key);
        if (!string || write_into_file(string) == EXIT_ERROR)
            return EXIT_ERROR;
        free(string);
        return EXIT_SUCCESS;
    }
    return EXIT_ERROR;
}
