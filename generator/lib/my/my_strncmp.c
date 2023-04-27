/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** mon strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    if (my_strlen(s1) == 0 || my_strlen(s2) == 0)
        return 0;
    while (i < n) {
        if (s1[i] > s2[i] || s1[i] < s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}
