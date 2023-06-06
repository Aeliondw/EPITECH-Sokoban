/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** Main
*/

#include "../include/my_sokoban.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        write(1, "Need pathfile to work\n", 22);
        return 84;
    }
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        flag_h();
        return 0;
    }
    int fd = f_open(argv[1]);
    if (fd < 0)
        return 84;
    char *buffer = f_read(fd, argv[1]);
    if (err_bad_map(buffer) == 1)
        return 84;
    map_t *map = init_map(buffer);
    coord_player_t *coord_p = init_coord_player();
    start_gameplay(map, coord_p);
    return 0;
}
