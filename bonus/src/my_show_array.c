/*
** EPITECH PROJECT, 2023
** my_show_array.c
** File description:
** print an array
*/

#include "proto.h"

void my_show_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i], 1);
        if (tab[i][my_strlen(tab[i]) - 1] != '\n')
            my_putchar('\n');
    }
    return;
}
