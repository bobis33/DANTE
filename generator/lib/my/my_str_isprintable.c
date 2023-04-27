/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** mon str_isprintable
*/
#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0; int y = 0;
    if (my_strlen(str) == 0)
        return 1;
    while (str[i] != '\0'){
        if (str[i] >= 32 && str[i] < 127)
            y++;
        i++;
    }
    if (y == i)
        return 1;
    return 0;
}
