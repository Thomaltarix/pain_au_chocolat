/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** No file there, just an epitech header example.
*/

#include "proto.h"

static int my_char_isalpha(char charac, char *delim)
{
    for (int i = 0; delim[i] != '\0'; i++) {
        if (charac == delim[i]) {
            return 0;
        }
    }
    if (charac < ' ' || charac > '~')
        return 0;
    return 1;
}

static char *create_word(char const *str, int index, char *delim)
{
    int temp = index;
    char *dest;
    int index_dest = 0;
    int length = 0;

    while (my_char_isalpha(str[temp], delim)) {
        length += 1;
        temp += 1;
    }
    dest = malloc(sizeof(char) * (length+ 1));
    while (my_char_isalpha(str[index], delim)) {
        dest[index_dest] = str[index];
        index_dest += 1;
        index += 1;
    }
    dest[index_dest] = '\0';
    return dest;
}

static int word_nb(char const *str, char *delim)
{
    int nb_word = 0;
    int index = 0;

    while (str[index]) {
        if (my_char_isalpha(str[index], delim) &&
        !my_char_isalpha(str[index+ 1], delim)) {
            nb_word += 1;
        }
        index += 1;
    }
    return nb_word;
}

char **my_str_to_word_array(char const *str, char *delim)
{
    int index = 0;
    int word_in_tab = 0;
    int nb_word = word_nb(str, delim);
    char **tab = malloc(sizeof(char *) * (nb_word + 1));

    while (str[index] != '\0') {
        if (!index && my_char_isalpha(str[index], delim)) {
            tab[word_in_tab] = create_word(str, index, delim);
            word_in_tab += 1;
        }
        if (!my_char_isalpha(str[index], delim) &&
        my_char_isalpha(str[index+ 1], delim)) {
            tab[word_in_tab] = create_word(str, index + 1, delim);
            word_in_tab += 1;
        }
        index += 1;
    }
    tab[word_in_tab] = NULL;
    return tab;
}

int *my_str_to_int_array(char const *str, char *delim)
{
    char **tab = my_str_to_word_array(str, delim);
    int *tab_int = malloc(sizeof(int) * word_nb(str, delim));
    int index = 0;

    while (tab[index] != NULL) {
        tab_int[index] = my_getnbr(tab[index]);
        index += 1;
    }
    return tab_int;
}
