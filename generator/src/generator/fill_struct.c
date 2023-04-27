/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** fill
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "struct.h"
#include "utils.h"
#include "macro.h"


static void grid_map(char **map, int i, int j)
{
    if (i % 2 == 0 && j % 2 == 0) {
        map[i][j] = '0';
    } else {
        map[i][j] = '1';
    }
}

static void fill_map_binary(char **map, int nb_lines, int nb_cols)
{
    int j = 0;
    for (int i = 0; i < nb_cols; i++) {
        for (; j < nb_lines; j++)
            grid_map(map, i, j);
        map[i][j] = '\0';
        j = 0;
    }
}

int fill_struct(int ac, char *av[], map_t *map)
{
    map->x = atoi(av[1]);
    map->y = atoi(av[2]);
    if (map->x == 0)
        return EPITECH_ERROR;
    if (map->y == 0)
        return EPITECH_ERROR;
    if (ac == 4) {
        map->perfect = 1;
    } else {
        map->perfect = 0;
    }
    srand(getpid());
    map->map = malloc_map(map->x, map->y);
    fill_map_binary(map->map, map->x, map->y);
    return SUCCESS;
}
