/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** rewind
*/

#include "solver.h"
#include "my.h"

void rewind_pos(solver_t *solver)
{
    solver->path[solver->coord[solver->steps].x]
        [solver->coord[solver->steps].y] = -1;
    solver->coord[solver->steps].x = solver->coord[solver->steps - 1].x;
    solver->coord[solver->steps].y = solver->coord[solver->steps - 1].y;
    solver->steps--;
    solver->real_steps++;
}
