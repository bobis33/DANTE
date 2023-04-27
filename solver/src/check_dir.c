/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** check_dir
*/

#include <limits.h>
#include "solver.h"
#include "my.h"

int check_right_direction(solver_t *solver)
{
    if (solver->coord[solver->steps].x + 1 < solver->size_x &&
        solver->coord[solver->steps].y < solver->size_y &&
        solver->maze[solver->coord[solver->steps].y]
        [solver->coord[solver->steps].x + 1] == '*' &&
        solver->path[solver->coord[solver->steps].x + 1]
        [solver->coord[solver->steps].y] == 0) {
        return 1;
    }
    return 0;
}

int check_down_direction(solver_t *solver)
{
    if (solver->coord[solver->steps].x < solver->size_x &&
    solver->coord[solver->steps].y + 1 < solver->size_y &&
        solver->maze[solver->coord[solver->steps].y + 1]
        [solver->coord[solver->steps].x] == '*' &&
        solver->path[solver->coord[solver->steps].x]
        [solver->coord[solver->steps].y + 1] == 0) {
        return 2;
    }
    return 0;
}

int check_up_direction(solver_t *solver)
{
    if (solver->coord[solver->steps].x >= 0 &&
    solver->coord[solver->steps].y - 1 >= 0 &&
        solver->maze[solver->coord[solver->steps].y - 1]
        [solver->coord[solver->steps].x] == '*' &&
        solver->path[solver->coord[solver->steps].x]
        [solver->coord[solver->steps].y - 1] == 0) {
        return 3;
    }
    return 0;
}

int check_left_direction(solver_t *solver)
{
    if (solver->coord[solver->steps].x - 1 >= 0 &&
    solver->coord[solver->steps].y >= 0 &&
        solver->maze[solver->coord[solver->steps].y]
        [solver->coord[solver->steps].x - 1] == '*' &&
        solver->path[solver->coord[solver->steps].x - 1]
        [solver->coord[solver->steps].y] == 0) {
        return 4;
    }
    return 0;
}

int check_direction(solver_t *solver)
{
    if (check_right_direction(solver) == 1)
        return 1;
    if (check_down_direction(solver) == 2)
        return 2;
    if (check_up_direction(solver) == 3)
        return 3;
    if (check_left_direction(solver) == 4)
        return 4;
    return -1;
}
