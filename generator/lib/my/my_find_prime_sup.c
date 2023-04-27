/*
** EPITECH PROJECT, 2022
** my_find_print_sup.c
** File description:
** mon find_print_sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 2) {
        if (my_is_prime(nb) == 1)
            return nb;
        nb++;
    }
    return 0;
}
