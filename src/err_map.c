/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Detect error map
*/

#include "../include/my_sokoban.h"

int check_buffer_char(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'P' && buffer[i] != ' ' && buffer[i] != '\n'
        && buffer[i] != '#' && buffer[i] != 'X' && buffer[i] != 'O') {
            write(1, "Character in map not supported\n", 31);
            return 1;
        }
    }
    return 0;
}

int err_bad_map(char *buffer)
{
    int count_p = count_buffer_p(buffer);
    int count_o = count_buffer_o(buffer);
    int count_x = count_buffer_x(buffer);
    if (check_buffer_char(buffer) == 1)
        return 1;
    if (count_p != 1) {
        write(1, "Map non functional cause 0 or > 1 player\n", 41);
        return 1;
    }
    if (count_o != count_x) {
        write(1, "Map not working cause number of X != number of O\n", 49);
        return 1;
    }
    return 0;
}
