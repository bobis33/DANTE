/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** init
*/

#include "solver.h"
#include "my.h"

void malloc_coord(solver_t *solver)
{
    solver->coord = malloc(sizeof(coord_t) * solver->size_x * solver->size_y );
    for (int i = 0; i < solver->size_x * solver->size_y; i++) {
        solver->coord[i].x = 0;
        solver->coord[i].y = 0;
    }
}

void set_to_zero(solver_t *solver, int i, int j)
{
    for (int k = 0; k < 3; k++) {
        solver->maze_int[i][j][k] = 0;
    }
}

void create_maze_int(solver_t *solver)
{
    solver->maze_int = malloc(sizeof(int **) * solver->size_y );
    for (int i = 0; i < solver->size_y; i++) {
        solver->maze_int[i] = malloc(sizeof(int *) * solver->size_x );
        for (int j = 0; j < solver->size_x; j++) {
            solver->maze_int[i][j] = malloc(sizeof(int) * 3 );
            set_to_zero(solver, i, j);
        }
    }
    malloc_coord(solver);
    solver->maze_int[0][0][3] = 1;
}
