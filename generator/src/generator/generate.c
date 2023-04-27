/*
** EPITECH PROJECT, 2023
** generator.h
** File description:
** generator file for map generator
*/

#include <stdlib.h>
#include "error.h"
#include "generator.h"
#include "macro.h"
#include "print.h"
#include "struct.h"
#include "utils.h"


static void one_wall_maze(map_t *map)
{
    map->map[0][map->x - 1] = '1';
}

static void tiny_maze(map_t *map)
{
    int j = 0;
    for (int i = 0; i < map->y; i++) {
        for (; j < map->x; j++) {
            map->map[i][j] = '0';
        }
        j = 0;
    }
}

static void big_or_tiny_maze(map_t *map)
{
    if (map->perfect == 0
    && (map->x < 6 || map->y < 6)) {
        tiny_maze(map);
        if (map->x > 2 || map->y > 2)
            one_wall_maze(map);
    } else {
        create_maze(map);
    }

}

int generator_init(int ac, char *av[])
{
    if (error(ac, av) == ERROR) {
        print_error();
        return EPITECH_ERROR;
    }
    map_t *map = malloc(sizeof(map_t));
    if (fill_struct(ac, av, map) == ERROR)
        return ERROR;
    big_or_tiny_maze(map);
    translate_and_print_map(map->map, map->x, map->y);
    free_all(map);
    return SUCCESS;
}
