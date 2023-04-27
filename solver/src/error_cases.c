/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** error_cases
*/

#include "solver.h"
#include "my.h"

int error_cases(int argc, char **argv)
{
    (void) argv;
    if (argc != 2) {
        write(2, "Invalid number of arguments\n", 28);
        return (84);
    }
    return (0);
}
