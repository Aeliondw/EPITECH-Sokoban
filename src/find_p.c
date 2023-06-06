/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Find player
*/

#include "../include/my_sokoban.h"

coord_player_t *get_p(map_t *map, coord_player_t *coord_p, int i, int j)
{
    if (map->map[i][j] == 'P') {
        coord_p->p_y = i;
        coord_p->p_x = j;
    }
    return coord_p;
}

coord_player_t *find_p(map_t *map, coord_player_t *coord_p)
{
    int j;
    for (int i = 0; map->map[i] != NULL; i++) {
        j = 0;
        for (j = 0; map->map[i][j] != '\0'; j++) {
            get_p(map, coord_p, i, j);
        }
    }
    return coord_p;
}
