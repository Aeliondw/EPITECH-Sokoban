/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Init struct
*/

#include "../include/my_sokoban.h"

map_t *init_map(char *buffer)
{
    map_t *map = malloc(sizeof (map_t));
    map->map = my_str_to_word_array(buffer);
    map->original_map = my_str_to_word_array(buffer);
    return map;
}

coord_player_t *init_coord_player(void)
{
    coord_player_t *coord_p = malloc(sizeof (coord_player_t));
    coord_p->p_x = 0;
    coord_p->p_y = 0;
    return coord_p;
}
