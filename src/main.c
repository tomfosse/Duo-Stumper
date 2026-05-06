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

int main(int ac, char **av)
{
    int key = 0;
    char *string = NULL;
    
    if (ac != 4)
        return EXIT_ERROR;
    key = atoi(av[3]);
    if (strcmp(av[1], "-f") == EXIT_SUCCESS) {
        //string = Get the char * from file AND encrypt
        //Write in file function
        free(string);
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
