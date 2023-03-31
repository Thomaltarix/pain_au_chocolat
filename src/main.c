/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** just main
*/

#include "proto.h"

void free_game(game_t *game, char **real_map)
{
    for (int index = 0; real_map[index] != NULL; index++) {
        free(real_map[index]);
        free(game->first_map[index]);
        free(game->second_map[index]);
    }
    free(real_map);
    free(game->first_map);
    free(game->second_map);
    free(game);
}

int main(int ac, char **av)
{
    char *line_map = NULL;
    char **real_map = NULL;
    int error = 0;

    if (ac != 3)
        return 84;
    line_map = readfile(av[1]);
    if (line_map == NULL)
        return 84;
    real_map = my_str_to_word_array(line_map, "");
    error = error_handling(ac, av, real_map);
    if (error == 84)
        return 84;
    play_game_of_life(real_map, my_getnbr(av[2]));
    return 0;
}