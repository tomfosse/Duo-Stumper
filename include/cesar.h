/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The main header file of the project
*/

#ifndef CESAR_H
    #define CESAR_H

    #define EXIT_ERROR 84;

int my_char_is_alpha(char c);
char *encrypt_str(char *str, int key);
char encrypt_negative_char(int key, char c);
char encrypt_positive_char(int key, char c);
char *parse_file(char *filepath);

#endif
