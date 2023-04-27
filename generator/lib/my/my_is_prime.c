/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** mon is_prime
*/

int my_is_prime(int nb)
{
    int i = 1; int j = 0;
    while (i <= nb) {
        if (nb % i == 0)
            j++;
        i++;
    }
    if (j == 2)
        return 1;
    return 0;
}
