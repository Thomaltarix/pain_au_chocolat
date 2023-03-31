/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** little getnbr
*/

#include "proto.h"

void my_putnbr(int nb)
{
    char *c = malloc(sizeof(char) * 2);

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    } else {
        c[0] = nb + '0';
        c[1] = '\0';
        write(1, c, 1);
    }
    free(c);
}

int my_getnbr(char *string)
{
    int result = 0;
    int i = 0;
    int sign = 1;

    if (string[0] == '-') {
        sign = -1;
        i++;
    }
    while (string[i] != '\0') {
        result = result * 10 + string[i] - '0';
        i++;
    }
    return result * sign;
}
