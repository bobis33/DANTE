/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** fonction that return 1 if the string passed as
** parameter only contain alphanumerique character
** or return 0 if have different character
*/
#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0; int y = 0;
    if (my_strlen(str) == 0)
        return 1;
    while (str[i] != '\0'){
        if ((str[i] > 'Z' && str[i] < 'A')
            || (str[i] > 'z' && str[i] < 'a'))
            y++;
        i++;
    }
    if (y == i)
        return 1;
    return 0;
}
