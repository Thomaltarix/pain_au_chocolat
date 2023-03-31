/*
** EPITECH PROJECT, 2023
** gameoflife
** File description:
** ratio
*/

#include "proto.h"

static off_t size_calc(char const *file_path)
{
    struct stat sb;

    stat(file_path, &sb);
    if (stat(file_path, &sb) == -1)
        return (-1);
    return (sb.st_size);
}

char *readfile(char *av)
{
    char *map;
    off_t size;
    int fd;

    fd = open(av, O_RDONLY);
    size = size_calc(av);
    if (size == -1 || fd == -1)
        return NULL;
    map = malloc(sizeof (char) * (size + 1));
    if (map == NULL)
        return NULL;
    if (!map || read(fd, map, size) == -1)
        return NULL;
    map[size] = '\0';
    close(fd);
    return (map);
}
