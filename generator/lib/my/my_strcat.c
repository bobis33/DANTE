/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** mon strcat
*/
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);
    while (src[i] != '\0' && src[i] != '\n'){
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
