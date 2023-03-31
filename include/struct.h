/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** struct
*/

#include <stdbool.h>

#pragma once

typedef struct game_s {
    char **first_map;
    char **second_map;
    int iteration;
} game_t;
