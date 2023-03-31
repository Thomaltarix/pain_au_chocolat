/*
** EPITECH PROJECT, 2023
** setup_struct.c
** File description:
** setup the only struct of the game of life
*/

#include "proto.h"

void setup_struct(game_t *game, char **map, int n)
{
    int index = 0;
    int map_len = my_tab_len(map);

    game->iteration = n;
    game->first_map = malloc(sizeof(char *) * (map_len + 1));
    game->second_map = malloc(sizeof(char *) * (map_len + 1));
    for (; map[index] != NULL; index++) {
        game->first_map[index] = my_strdup(map[index]);
        game->second_map[index] = my_strdup(map[index]);
    }
    game->first_map[index] = NULL;
    game->second_map[index] = NULL;
    return;
}
