/*
** EPITECH PROJECT, 2023
** gameoflife
** File description:
** error handling
*/

#include "proto.h"

static bool is_a_valid_char(char c)
{
    if (c != '\n' && c != 'X' && c != '.' && c != '\0')
        return true;
    return false;
}

static int map_error(char **real_map)
{
    bool error = false;

    for (int i = 1; real_map[i] != NULL; i++)
        if (my_strlen(real_map[i]) != my_strlen(real_map[i - 1])) {
            my_putstr("line not the same length", 2);
            return 84;
        }
    for (int y = 0; real_map[y] != NULL; y++) {
        for (int x = 0; real_map[y][x] != '\0'; x++) {
            error = is_a_valid_char(real_map[y][x]);
        }
        if (error != false) {
            my_putstr("There is a wrong character\n", 2);
            return 84;
        }
    }
    return 0;
}

static int is_a_number(char *nbr)
{
    for (int i = 0; nbr[i] != '\0'; i++) {
        if (nbr[i] < '0' && nbr[i] > '9')
            return 84;
    }
    return 0;
}

int error_handling(int ac, char **av, char **real_map)
{
    if (ac != 3) {
        my_putstr("i need 2 args", 2);
        return 84;
    }
    if (is_a_number(av[2]) == 84) {
        my_putstr("args nbr tow is not a number", 2);
        return 84;
    }
    if (map_error(real_map) == 84)
        return 84;
    return 0;
}
