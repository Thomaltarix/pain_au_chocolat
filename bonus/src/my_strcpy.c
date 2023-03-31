/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copy a string into another
*/

#include "proto.h"

char *my_strcpy(char *dest, char const *src)
{
    int count = 0;

    while (src[count] != 0) {
        dest[count] = src[count];
        count++;
    }
    dest[count] = 0;
    return dest;
}
