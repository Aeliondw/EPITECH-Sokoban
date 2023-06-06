/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Start gameplay
*/

#include "../include/my_sokoban.h"

void print_map(map_t *map)
{
    for (int i = 0; map->map[i]; i++) {
        printw("%s", map->map[i]);
    }
}
