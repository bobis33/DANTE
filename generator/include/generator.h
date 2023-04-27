/*
** EPITECH PROJECT, 2023
** generator.h
** File description:
** EPITECH Project includes for map generator
*/

#ifndef _GENERATOR_H_
    #define _GENERATOR_H_
    #include "struct.h"
    int generator_init(int ac, char *av[]);
    int fill_struct(int ac, char *av[], map_t *map);
    void create_maze(map_t *map);
    int break_walls(map_t *map);
#endif
