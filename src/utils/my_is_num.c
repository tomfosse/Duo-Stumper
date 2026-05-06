/*
** EPITECH PROJECT, 2026
** my_is_num.c
** File description:
** my is num
*/

#include <stdlib.h>
#include "cesar.h"

int my_is_num(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            continue;
        if (str[i] < '0' || str[i] > '9')
            return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}
