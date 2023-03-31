/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** write a string in the given channel
*/

#include "proto.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str, int channel)
{
    int len = my_strlen(str);

    if (channel < 1 || channel > 3)
        return;
    write(channel, str, len);
}
