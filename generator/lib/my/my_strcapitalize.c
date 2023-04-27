/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** mon strcapitalize
*/

#include <stdbool.h>
#include "my.h"

bool is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}

bool is_upper(char c)
{
    if (c <= 'Z' && c >= 'A')
        return true;
    return false;
}

bool is_alphanum(char c)
{
    if ((c <= 'z' && c >= 'a')
        || (is_upper(c) == true)
        || (is_number(c) == true))
        return true;
    return false;
}

char convert_character(char c, bool previous)
{
    if (previous == false
        && is_number(c) == false
        && is_upper(c) == false)
        c = c - 32;
    else if (previous == true && is_upper(c) == true)
        c = c + 32;
    return c;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    bool previous = false;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == false) {
            previous = false;
        } else {
            str[i] = convert_character(str[i], previous);
            previous = true;
        }
        i++;
    }
    return (str);
}
