/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** compare 2 strings
*/

#include "proto.h"

int my_strncmp(char *str1, char *str2, int n)
{
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

int my_strcmp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2)) {
        return 0;
    }
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}
