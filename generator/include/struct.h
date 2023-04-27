/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** include for my struct for map generator
*/

#ifndef _STRUCT_H_
    #define _STRUCT_H_
    typedef struct map{
        char **map;
        long long int x;
        long long int y;
        int n;
        int w;
        int perfect;
    }map_t;
#endif
