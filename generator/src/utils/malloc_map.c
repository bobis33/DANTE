/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** malloc_map
*/
#include <stddef.h>
#include <stdlib.h>


char **malloc_map(int nb_lines, int nb_cols)
{
    char **map = NULL;
    int i = 0;
    map = malloc(sizeof(char *) * nb_cols + 8);
    for (; i < nb_cols; i++)
        map[i] = malloc(sizeof(char) * nb_lines + 1);
    map[i] = NULL;
    return map;
}
