/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** maze.c
*/

#include <stdlib.h>
#include "macro.h"
#include "struct.h"


static void randomise(map_t *map, int random, int i, int j)
{
    if (map->n == 1 && map->w == 1) {
        random = rand() % 2;
        if (j > 0 && random == 0)
            map->map[i][j - 1] = '0';
        if (i > 0 && random == 1)
            map->map[i - 1][j] = '0';
    }
}

static void north_west_walls(map_t *map, int i, int j)
{
    if (i > 0 && map->map[i - 1][j] == '1')
        map->n = 1;
    if (j > 0 && map->map[i][j - 1] == '1')
        map->w = 1;
    if (i > 0
    && (map->n == 1 && map->w == 0))
        map->map[i - 1][j] = '0';
    if (j > 0
    && (map->n == 0 && map->w == 1))
        map->map[i][j - 1] = '0';
}

static void break_walls(map_t *map)
{
    int lines = 0;
    int cols = 0;
    int max_to_break = (map->x * map->y / 2);
    for (int index = 0; index != max_to_break; index++) {
        lines = rand() % map->y;
        cols = rand() % map->x;
        if (map->map[lines][cols] == '1')
            map->map[lines][cols] = '0';
    }
}

static void open_arrival(char **map, int lines, int cols)
{
    if (map[lines - 1][cols - 2] == '1'
    && (map[lines - 2][cols - 1] == '1'))
        map[lines - 1][cols - 2] = '0';
    map[lines - 1][cols - 1] = '0';
}

void create_maze(map_t *map)
{
    int random = 0;
    for (int i = 0; i < map->y; i += 2) {
        map->n = 0;
        map->w = 0;
        for (int j = 0; j < map->x; j += 2) {
            north_west_walls(map, i, j);
            randomise(map, random, i, j);
        }
    }
    if (map->perfect == 0)
        break_walls(map);
    open_arrival(map->map, map->y, map->x);
}
