/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** init_check
*/

#include "solver.h"
#include "my.h"

int check_if_maze_is_rectangle(char **maze)
{
    int i = 0;
    int size = my_strlen(maze[0]);
    while (maze[i + 1] != NULL) {
        if (my_strlen(maze[i]) != size)
            return (84);
        i++;
    }
    if (my_strlen(maze[i]) != size - 1)
        return (84);
    return (0);
}

int check_char(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'X' && buffer[i] != '*' && buffer[i] != '\n')
            return (84);
    }
    return (0);
}

int init_check(char *buffer, int size)
{
    if (buffer[0] == 'X' || buffer[strlen(buffer) - 1] == 'X')
        return (84);
    if (check_char(buffer) == 84)
        return (84);
    if (size == 0)
        return (84);
    return 0;
}
