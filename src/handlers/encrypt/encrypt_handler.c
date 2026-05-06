/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The function to encrypt the char * str
*/

#include <string.h>
#include <stdlib.h>
#include "cesar.h"

char *encrypt_str(char *str, int key)
{
    char *output = NULL;
    int len = 0;

    if (!str)
        return NULL;
    if (key == 0)
        return strdup(str);
    len = strlen(str);
    output = malloc(sizeof(char) * (len + 1));
    if (!output)
        return NULL;
    if (key < 0)
        for (int i = 0; str[i] != '\0'; i++)
            output[i] = encrypt_negative_char(key, str[i]);
    if (key > 0)
        for (int i = 0; str[i] != '\0'; i++)
            output[i] = encrypt_positive_char(key, str[i]);
    output[len] = '\0';
    return output;
}
