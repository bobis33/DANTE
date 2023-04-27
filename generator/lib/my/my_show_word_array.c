/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** display content of an array of words
*/
#include <unistd.h>

int my_show_word_array(char const **tab)
{
    int i = 0; int j = 0;
    while (*tab[i] != '\0'){
        while (tab[i][j] != '\0'){
            write(1, &tab[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
