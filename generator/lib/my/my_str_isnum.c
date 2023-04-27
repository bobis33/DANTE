/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** mon str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0; int y = 0;
    if (my_strlen(str) == 0)
        return 1;
    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57)
            y++;
        i++;
    }
    if (y == i)
        return 1;
    return 0;
}
