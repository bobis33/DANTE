/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** mon str_islower
*/
#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0; int y = 0;
    if (my_strlen(str) == 0)
        return 1;
    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a')
            y++;
        i++;
    }
    if (i == y)
        return 1;
    return 0;
}
