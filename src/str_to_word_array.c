/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Str to word array
*/

#include "../include/my_sokoban.h"

int count_lines(char *buffer)
{
    int lines = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            lines++;
    }
    return lines;
}

char *my_strncpy(char *map, char *buffer, int n)
{
    int i = 0;
    while (i < n && buffer[i] != '\0') {
        map[i] = buffer[i];
        i++;
    }
    return map;
}

char **my_str_to_word_array(char *buffer)
{
    int lines = count_lines(buffer);
    int col = 0;
    int j = 0;
    char **map = malloc(sizeof(char *) * (lines + 1));
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] != '\n')
            col++;
        if (buffer[i] == '\n') {
            map[j] = malloc(sizeof(char) * col + 1);
            my_strncpy(map[j], &buffer[i - col], col + 1);
            j++;
            col = 0;
        }

    }
    map[j] = 0;
    return map;
}
