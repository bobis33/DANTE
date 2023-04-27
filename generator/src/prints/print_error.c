/*
** EPITECH PROJECT, 2023
** print_error.c
** File description:
** EPITECH Project print error for map generator
*/
#include <unistd.h>
#include "macro.h"

int print_error(void)
{
    if (write(2, "Error: bad arguments.\n", 22) == ERROR)
        return ERROR;
    return SUCCESS;
}
