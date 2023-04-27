/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** print_map
*/

#include <stddef.h>
#include <unistd.h>

static void translate(char character)
{
    if (character == '1') {
        write(1, "X", 1);
    } else {
        write(1, "*", 1);
    }
}

void translate_and_print_map(char **map, int x, int y)
{
    int j = 0;
    for (int i = 0; i < y; i++) {
        if (i > 0)
            write(1, "\n", 1);
        for (; j < x; j++)
            translate(map[i][j]);
        j = 0;
    }
}
