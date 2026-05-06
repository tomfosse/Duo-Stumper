/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The function to encrypt a negative key char
*/

#include "cesar.h"

char encrypt_negative_char(int key, char c)
{
    if (my_char_is_alpha(c) != 1)
        return c;
    for (int i = key; i < 0; i++) {
        if (c == 'A') {
            c = 'Z';
            continue;
        }
        if (c == 'a') {
            c = 'z';
            continue;
        }
        c--;
    }
    return c;
}
