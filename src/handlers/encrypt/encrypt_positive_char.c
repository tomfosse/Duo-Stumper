/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The function to encrypt a char when the key is positive
*/

#include "cesar.h"

char encrypt_positive_char(int key, char c)
{
    if (my_char_is_alpha(c) != 1)
        return c;
    for (int i = key; i > 0; i--) {
        if (c == 'Z') {
            c = 'A';
            continue;
        }
        if (c == 'z') {
            c = 'a';
            continue;
        }
        c++;
    }
    return c;
}
