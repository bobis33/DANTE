/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** reverse string
*/
#include "my.h"

char *my_revstr(char *str)
{
    int i = 0; int y = 0; char swap_value;
    y = my_strlen(str) - 1;
    while (i < y) {
        swap_value = str[y];
        str[y] = str[i];
        str[i] = swap_value;
        i++;
        y--;
    }
    return str;
}
