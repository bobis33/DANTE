/*
** EPITECH PROJECT, 2023
** free_all.c
** File description:
** free all for map generator
*/
#include <stddef.h>
#include <stdlib.h>
#include "struct.h"

void free_all(map_t *map)
{
    int i = 0;
    for (; i != map->y; i++)
        free(map->map[i]);
    free(map->map);
    free(map);
}
