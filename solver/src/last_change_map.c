/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** last_change_map
*/

#include "solver.h"
#include "my.h"

void change_value(solver_t *solver, int i, int j)
{
    if (solver->path[j][i] == 1) {
        solver->maze[i][j] = 'o';
    }
}

void show_result(solver_t *solver)
{
    for (int i = 0; i < solver->size_y; i++) {
        for (int j = 0; j < solver->size_x; j++) {
            change_value(solver, i, j);
        }
    }
    print_map(solver);
}
