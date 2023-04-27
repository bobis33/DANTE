/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** find_weight
*/

#include "solver.h"
#include "my.h"

void distance_from_start_end(solver_t *solver, int i, int j)
{
    solver->maze_int[i][j][1] = (solver->size_x - 1) - i + (solver->size_y - 1)
        - j;
    solver->maze_int[i][j][0] = i + j;
}

void sum_of_distance(solver_t *solver, int i, int j)
{
    solver->maze_int[i][j][2] = solver->maze_int[i][j][0] +
        solver->maze_int[i][j][1];
}

void find_distance_for_one_star(solver_t *solver, int i, int j)
{
    distance_from_start_end(solver, i, j);
    sum_of_distance(solver, i, j);
}

void check_if_star(solver_t *solver, int i, int j)
{
    if (solver->maze[i][j] == '*') {
        find_distance_for_one_star(solver, i, j);
    }
}

void find_distance_for_all_stars(solver_t *solver)
{
    for (int i = 0; i < solver->size_y; i++) {
        for (int j = 0; j < solver->size_x; j++) {
            check_if_star(solver, i, j);
        }
    }
}
