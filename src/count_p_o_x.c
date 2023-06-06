/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Count character
*/

#include "../include/my_sokoban.h"

int count_buffer_p(char *buffer)
{
    int count_p = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'P') {
            count_p++;
        }
    }
    return count_p;
}

int count_buffer_o(char *buffer)
{
    int count_o = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'O') {
            count_o++;
        }
    }
    return count_o;
}

int count_buffer_x(char *buffer)
{
    int count_x = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'X') {
            count_x++;
        }
    }
    return count_x;
}
