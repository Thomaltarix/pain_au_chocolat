/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** emacs
*/

#include "proto.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    char *new;

    if (src == NULL)
        return dest;
    new = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    if (new == NULL)
        return NULL;
    while (dest[i] != '\0') {
        new[i] = dest[i];
        i++;
    }
    while (src[j] != '\0') {
        new[i] = src[j];
        i++;
        j++;
    }
    new[i] = '\0';
    return new;
}
