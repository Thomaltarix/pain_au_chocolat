/*
** EPITECH PROJECT, 2023
** game_of_life.c
** File description:
** Play the game of life n times
*/

#include "proto.h"

static int check_corners_and_middle(char **map, int y, int x)
{
    int sum = 0;

    if (y - 1 >= 0 && x - 1 >= 0 && map[y - 1][x - 1] == 'X')
        sum++;
    if (y - 1 >= 0 && x + 1 <= my_strlen(map[0]) - 1 &&
        map[y - 1][x + 1] == 'X')
        sum++;
    if (y + 1 <= my_tab_len(map) - 1 && x - 1 >= 0 && map[y + 1][x - 1] == 'X')
        sum++;
    if (y + 1 <= my_tab_len(map) - 1 && x + 1 <= my_strlen(map[0]) - 1 &&
        map[y + 1][x + 1] == 'X')
        sum++;
    return sum;
}

static bool need_to_die(char **map, int y, int x)
{
    int neighbor = 0;

    if (y - 1 >= 0 && map[y - 1][x] == 'X')
        neighbor++;
    if (y + 1 <= my_tab_len(map) - 1 && map[y + 1][x] == 'X')
        neighbor++;
    if (x - 1 >= 0 && map[y][x - 1] == 'X')
        neighbor++;
    if (x + 1 <= my_strlen(map[0]) && map[y][x + 1] == 'X')
        neighbor++;
    neighbor += check_corners_and_middle(map, y, x);
    if (map[y][x] == 'X' && (neighbor == 2 || neighbor == 3))
        return false;
    if (map[y][x] == '.' && neighbor == 3)
        return false;
    if (map[y][x] == 'X' && (neighbor > 3))
        return true;
    return true;
}

static void execute_rules(game_t *game, int y, int x)
{
    if (need_to_die(game->first_map, y, x) == true)
        game->second_map[y][x] = '.';
    else
        game->second_map[y][x] = 'X';
}

static void iterate_game(game_t *game)
{
    for (int y = 0; game->first_map[y] != NULL; y++) {
        for (int x = 0; game->first_map[y][x] != '\0'; x++) {
            execute_rules(game, y, x);
        }
    }
    for (int line = 0; game->first_map[line] != NULL; line++) {
        for (int col = 0; game->first_map[line][col] != '\0'; col++) {
            game->first_map[line][col] = game->second_map[line][col];
        }
    }
}

void play_game_of_life(char **map, int n)
{
    game_t *game = malloc(sizeof(game_t));

    setup_struct(game, map, n);
    for (;game->iteration != 1; game->iteration--) {
        iterate_game(game);
        my_show_array(game->first_map);
        my_putstr("-----------------------------\n", 1);
        sleep(2);
    }
    my_show_array(game->first_map);
    free_game(game, map);
}
