/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Flag -h
*/

#include "../include/my_sokoban.h"

int flag_h(void)
{
    write(1, "USAGE\n", 6);
    write(1, "\t./my_sokoban map\n", 19);
    write(1, "DESCRIPTION\n", 12);
    write(1," \tmap file representing the warehouse map,", 43);
    write(1, "containing '#' for walls, \n", 27);
    write(1, "\t'P' for the player, 'X' for boxes and 'O'", 43);
    write(1, " for storage locations.\n", 24);
    return 0;
}
