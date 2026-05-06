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
void file_flag_handling()
{
    file_datas = parse_file(av[2]);
    string = encrypt_str(file_datas, key);
    //Write in file function
    free(string);
    free(file_datas);
}

int main(int ac, char **av)
{
    int key = 0;
    char *file_datas = NULL;
    char *string = NULL;
    
    if (ac != 4)
        return EXIT_ERROR;
    key = atoi(av[3]);
    if (strcmp(av[1], "-f") == EXIT_SUCCESS) {
        file_datas = parse_file(av[2]);
        string = encrypt_str(file_datas, key);
        //Write in file function
        free(string);
        free(file_datas);
        return EXIT_SUCCESS;
    }
    if (strcmp(av[1], "-s") == EXIT_SUCCESS) {
        string = encrypt_str(av[2], key);
        //Write in file function
        free(string);
        return EXIT_SUCCESS;
    }
    return EXIT_ERROR;
}
