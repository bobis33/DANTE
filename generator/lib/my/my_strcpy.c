/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** ceci est mon strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;
    i = 0;
    while (dest[i] != '\0'){
        dest[i] = src[i];
        i = i +	1;
    }
    dest[i] = '\0';
    return (dest);
}
