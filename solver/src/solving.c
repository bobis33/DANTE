/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** generation
*/

#include "solver.h"
#include "my.h"

int solving(int argc, char **argv)
{
    solver_t *solver = malloc(sizeof(solver_t));
    if (error_cases(argc, argv) == 84)
        return (84);
    if (argc != 2)
        return (84);
    if (read_file(argv[1], solver) == 84)
        return (84);
    if (pathfinding(solver) == 84)
        return (84);
    return (0);
}
