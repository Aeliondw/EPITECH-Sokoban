/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Start gameplay
*/

#include "../include/my_sokoban.h"

int start_gameplay(map_t *map, coord_player_t *coord_p)
{
    initscr(); noecho(); curs_set(0); cbreak(); keypad(stdscr, TRUE);
    while (1) {
        int ch;
        clear();
        find_p(map, coord_p);
        save_o(map);
        print_map(map);
        if ((ch = getch()) != 32)
            moves(ch, map, coord_p);
        if (ch == 27)
            break;
        refresh();
    }
    endwin();
    return 0;
}
