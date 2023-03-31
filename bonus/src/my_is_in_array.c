/*
** EPITECH PROJECT, 2023
** my_is_in_array.c
** File description:
** returns if the string is in the array or not
*/

#include "proto.h"

int is_in_array(char **tab, char *string)
{
    for (int y = 0; tab[y] != NULL; y++) {
        if (my_strncmp(tab[y], string, my_strlen(string)) == 1)
            return y;
    }
    return -1;
}
