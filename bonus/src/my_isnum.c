/*
** EPITECH PROJECT, 2023
** my_isnum.c
** File description:
** check if it's a num or not
*/

#include "proto.h"

int my_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

int my_is_alphanum(char c)
{
    if (my_isnum(c) == 1 || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return 1;
    return 0;
}

int my_isnum(char c)
{
    if (c >= '1' && c <= '9')
        return 1;
    return 0;
}
