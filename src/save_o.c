/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Save 'O'
*/

#include "../include/my_sokoban.h"

void display_o(map_t *map, int i, int j)
{
    if (map->original_map[i][j] == 'O' && map->map[i][j] == ' ')
        map->map[i][j] = 'O';
}

map_t *save_o(map_t *map)
{
    for (int i = 0; map->original_map[i] != NULL; i++) {
        for (int j = 0; map->original_map[i][j] != '\0'; j++) {
            display_o(map, i, j);
        }
    }
    return map;
}
