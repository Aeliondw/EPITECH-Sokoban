/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Handle moves
*/

#include "../include/my_sokoban.h"

void go_down(map_t *map, coord_player_t *coord)
{
    if ((map->map[coord->p_y + 1][coord->p_x] != '#')
        && (map->map[coord->p_y + 1][coord->p_x] != 'X')) {
        map->map[coord->p_y + 1][coord->p_x] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
    if ((map->map[coord->p_y + 1][coord->p_x] == 'X')
        && ((map->map[coord->p_y + 2][coord->p_x] == ' ')
        || (map->map[coord->p_y + 2][coord->p_x] == 'O'))) {
        map->map[coord->p_y + 2][coord->p_x] = 'X';
        map->map[coord->p_y + 1][coord->p_x] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
}

void go_up(map_t *map, coord_player_t *coord)
{
    if ((map->map[coord->p_y - 1][coord->p_x] != '#')
        && (map->map[coord->p_y - 1][coord->p_x] != 'X')) {
        map->map[coord->p_y - 1][coord->p_x] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
    if ((map->map[coord->p_y - 1][coord->p_x] == 'X')
        && ((map->map[coord->p_y - 2][coord->p_x] == ' ')
        || (map->map[coord->p_y - 2][coord->p_x] == 'O'))) {
        map->map[coord->p_y - 2][coord->p_x] = 'X';
        map->map[coord->p_y - 1][coord->p_x] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
}

void go_left(map_t *map, coord_player_t *coord)
{
    if ((map->map[coord->p_y][coord->p_x - 1] != '#')
        && (map->map[coord->p_y][coord->p_x - 1] != 'X')) {
        map->map[coord->p_y][coord->p_x - 1] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
    if ((map->map[coord->p_y][coord->p_x - 1] == 'X')
        && ((map->map[coord->p_y][coord->p_x - 2] == ' ')
        || (map->map[coord->p_y][coord->p_x - 2] == 'O'))) {
        map->map[coord->p_y][coord->p_x - 2] = 'X';
        map->map[coord->p_y][coord->p_x - 1] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
}

void go_right(map_t *map, coord_player_t *coord)
{
    if ((map->map[coord->p_y][coord->p_x + 1] != '#')
        && (map->map[coord->p_y][coord->p_x + 1] != 'X')) {
        map->map[coord->p_y][coord->p_x + 1] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
    if ((map->map[coord->p_y][coord->p_x + 1] == 'X')
        && ((map->map[coord->p_y][coord->p_x + 2] == ' ')
        || (map->map[coord->p_y][coord->p_x + 2] == 'O'))) {
        map->map[coord->p_y][coord->p_x + 2] = 'X';
        map->map[coord->p_y][coord->p_x + 1] = 'P';
        map->map[coord->p_y][coord->p_x] = ' ';
    }
}

void moves(int ch, map_t *map, coord_player_t *coord)
{
    switch (ch) {
        case KEY_DOWN:
            go_down(map, coord);
            break;
        case KEY_UP:
            go_up(map, coord);
            break;
        case KEY_LEFT:
            go_left(map, coord);
            break;
        case KEY_RIGHT:
            go_right(map, coord);
            break;
        default:
            break;
    }
}
