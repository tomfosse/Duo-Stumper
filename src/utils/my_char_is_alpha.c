/*
** EPITECH PROJECT, 2026
** Cesar
** File description:
** The function to know if a char is a alphanumeric
*/

int my_char_is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
