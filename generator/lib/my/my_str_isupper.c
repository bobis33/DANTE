/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** mon str_isupper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int y = 0; int i = 0;
    if (my_strlen(str) == 0)
        return 1;
    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A')
            y++;
        i++;
    }
    if (y == i)
        return 1;
    return 0;
}
