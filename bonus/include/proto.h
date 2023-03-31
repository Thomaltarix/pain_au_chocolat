/*
** EPITECH PROJECT, 2023
** proto.h
** File description:
** all protos of minishell's project
*/

#include "struct.h"
#include "lib.h"

#ifndef PROTO
    #define PROTO

void free_game(game_t *game, char **map);
void setup_struct(game_t *game, char **map, int n);
int main(int ac, char **av);
int error_handling(int ac, char **av, char **real_map);
char *readfile(char *av);
void play_game_of_life(char **map, int n);

#endif /* !ANTMAN */
