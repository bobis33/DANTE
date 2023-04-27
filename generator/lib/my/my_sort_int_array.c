/*
** EPITECH PROJECT, 2022
** my_sort_int_array.c
** File description:
** mon sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0; int swap_value = 0;
    while (i < size -1) {
        if (array[i] > array[i + 1]) {
            swap_value = array[i];
            array[i] = array[i + 1];
            array[i + 1] = swap_value;
            i = 0;
        }
        i++;
    }
}
