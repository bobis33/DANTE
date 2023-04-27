/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** pathfinder
*/

#include "solver.h"
#include "my.h"

#include <stdio.h>
#include <stdlib.h>

void malloc_path(solver_t *solver)
{
    solver->path = malloc(sizeof(int *) * solver->size_x);
    for (int i = 0; i < solver->size_x; i++) {
        solver->path[i] = malloc(sizeof(int) * solver->size_y);
        for (int j = 0; j < solver->size_y; j++) {
            solver->path[i][j] = 0;
        }
    }
}

int check_no_solce(solver_t *solver)
{
    if (solver->steps == 0) {
        if ((solver->path[0][1] == -1 || solver -> maze [0][1] == 'X') &&
        (solver->path[1][0] == -1 || solver -> maze [1][0] == 'X'))
            return (1);
    }
    return (0);
}

int start_finding_path(solver_t *solver)
{
    malloc_path(solver);
    solver->path[0][0] = 1;
    solver->real_steps = 0;
    while (solver->path[solver->size_x - 1][solver->size_y - 1] != 1) {
        if (check_no_solce(solver) == 1) {
            write(1, "no solution found", 17);
            return (1);
        }
        test_pos(solver);
    }
    show_result(solver);
    return (0);
}

int pathfinding(solver_t *solver)
{
    create_maze_int(solver);
    find_distance_for_all_stars(solver);
    if (start_finding_path(solver) == 1)
        return (0);
    return (0);
}
