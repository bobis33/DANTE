/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** mon put_nbr
*/
#include <unistd.h>
#include "my.h"

void my_put_nbr(int nb)
{
    long nbr = 0;
    nbr = nb;
    if (nbr < 0) {
        write(1, "-", 1);
        nbr = nbr * -1;
    } if (nbr > 9) {
        my_put_nbr(nbr / 10);
        my_putchar(48 + nbr % 10);
    } else {
        my_putchar(48 + nbr);
    }
}
