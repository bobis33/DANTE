/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-elliot.masina
** File description:
** check_arg
*/
#include <stddef.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "macro.h"

int check_x_y_arg(char *arg_x, char *arg_y)
{
    for (int i = 0; arg_x[i] != '\0'; i++) {
        if (!isdigit(arg_x[i]))
            return ERROR;
    } for (int i = 0; arg_y[i] != '\0'; i++) {
        if (!isdigit(arg_y[i]))
            return ERROR;
    }
    if (!atoi(arg_x) || !atoi(arg_y))
        return ERROR;
    return SUCCESS;
}

int check_perfect(int ac, char *arg_p)
{
    if (ac == 4 && strcmp("perfect", arg_p) != 0)
        return ERROR;
    return SUCCESS;
}
