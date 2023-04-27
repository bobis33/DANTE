/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** mon getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    long int final_result = 0;
    int neg = 0;
    while (str[i] != '\0') {
        if (str[i] == '-' && (str[i] >= '0' && str[i] <= '9'))
            neg = 1;
        if (str[i] >= '0' && str[i] <= '9')
            final_result = final_result + (str[i] - 48);
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            final_result = final_result * 10;
        if ((final_result >= 1 && (str[i + 1] > '9' || str[i + 1] < '0')
            || str[i] == '0' && (str[i + 1] < '0' || str[i + 1] > '9')))
            break;
        i++;
    }
    if (final_result <= -2147483648 || final_result >= 2147483647)
        return 0;
    if (neg == 1)
        final_result = final_result * (-1);
    return (final_result);
}
