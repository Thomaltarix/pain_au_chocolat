/*
** EPITECH PROJECT, 2023
** lib.h
** File description:
** PROTOS
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>

#ifndef PROTOS
    #define PROTOS

int my_isalpha(char c);
int my_isnum(char c);
int my_is_alphanum(char c);
int is_in_array(char **tab, char *string);
int is_in_array(char **tab, char *string);
int my_isnum(char c);
void my_show_array(char **tab);
int my_tab_len(char **tab);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int n);
void my_putnbr(int nb);
int my_getnbr(char *string);
int *my_str_to_int_array(char const *str, char *delim);
char **my_str_to_word_array(char const *str, char *delim);
void my_putstr(char const * str, int channel);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);

#endif /* !PROTOS */
