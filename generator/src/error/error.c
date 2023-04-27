/*
** EPITECH PROJECT, 2023
** error.c
** File description:
** EPITECH Project error case for map generator
*/
#include <stddef.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "macro.h"
#include "error.h"

int error(int ac, char *av[])
{
    if (ac < 3 || ac > 4
    || (av == NULL))
        return ERROR;
    if (check_x_y_arg(av[1], av[2]) == ERROR)
        return ERROR;
    return check_perfect(ac, av[3]);
}
