/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** print_map
*/

#include "solver.h"
#include "my.h"

void print_map(solver_t *solver)
{
    for (int i = 0; solver -> maze[i] != NULL; i++) {
        for (int j = 0; solver -> maze[i][j] != '\0'; j++) {
            write(1, &solver -> maze[i][j], 1);
        }
    }
}
