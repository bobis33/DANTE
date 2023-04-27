/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** move
*/

#include "solver.h"
#include "my.h"

void move_right(solver_t *solver)
{
    solver->steps = solver->steps + 1;
    solver->coord[solver->steps].x = solver->coord[solver->steps - 1].x + 1;
    solver->coord[solver->steps].y = solver->coord[solver->steps - 1].y;
    solver->path[solver->coord[solver->steps].x]
    [solver->coord[solver->steps].y] = 1;
    solver->real_steps++;
}

void move_down(solver_t *solver)
{
    solver->steps = solver->steps + 1;
    solver->coord[solver->steps].x = solver->coord[solver->steps - 1].x;
    solver->coord[solver->steps].y = solver->coord[solver->steps - 1].y + 1;
    solver->path[solver->coord[solver->steps].x]
    [solver->coord[solver->steps].y] = 1;
    solver->real_steps++;
}

void move_left(solver_t *solver)
{
    solver->steps = solver->steps + 1;
    solver->coord[solver->steps].x = solver->coord[solver->steps - 1].x - 1;
    solver->coord[solver->steps].y = solver->coord[solver->steps - 1].y;
    solver->path[solver->coord[solver->steps].x]
    [solver->coord[solver->steps].y] = 1;
    solver->real_steps++;
}

void move_up(solver_t *solver)
{
    solver->steps = solver->steps + 1;
    solver->coord[solver->steps].x = solver->coord[solver->steps - 1].x;
    solver->coord[solver->steps].y = solver->coord[solver->steps - 1].y - 1;
    solver->path[solver->coord[solver->steps].x]
    [solver->coord[solver->steps].y] = 1;
    solver->real_steps++;
}

void test_pos(solver_t *solver)
{
    int direction = check_direction(solver);
    if (direction == 1) {
        move_right(solver); return;
    }
    if (direction == 2) {
        move_down(solver); return;
    }
    if (direction == 3) {
        move_up(solver); return;
    }
    if (direction == 4) {
        move_left(solver); return;
    }
    if (direction == -1) {
        rewind_pos(solver); return;
    }
}
