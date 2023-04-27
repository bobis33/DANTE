/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** mon putstr
*/
#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}
