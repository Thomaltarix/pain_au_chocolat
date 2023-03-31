/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** returns the len of a string or a tab
*/

#include "proto.h"

int my_tab_len(char **tab)
{
    int len = 0;

    for (; tab[len] != NULL; len++);
    return len;
}

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}
