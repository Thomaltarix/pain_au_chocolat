/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** malloc a string and copy it
*/

#include "proto.h"

char *my_strdup(char const *src)
{
    char *new = malloc(sizeof(char) * my_strlen(src) + 1);

    if (new == NULL)
        return new;
    my_strcpy(new, src);
    return new;
}
