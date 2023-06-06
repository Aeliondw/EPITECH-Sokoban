/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** .h
*/

#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#ifndef MY_SOKOBAN_H_
    #define MY_SOKOBAN_H_

typedef struct coord_player_s {
    int p_x;
    int p_y;
} coord_player_t;

typedef struct map_s {
    char **map;
    char **original_map;
} map_t;

//HELPER
int flag_h(void);

//CHECK CONDITIONS
int err_bad_map(char *buffer);
int check_buffer_char(char *buffer);

//COUNT
int count_buffer_p(char *buffer);
int count_buffer_o(char *buffer);
int count_buffer_x(char *buffer);

//HANDLE FILE
int f_open(char const *filename);
void read_error(int r, int size);
char *f_read(int fd, char const *filename);
void f_close(int fd);

//INIT STRUCT
map_t *init_map(char *buffer);
coord_player_t *init_coord_player(void);

//GAMEPLAY
int start_gameplay(map_t *map, coord_player_t *coord_p);
void print_map(map_t *map);
coord_player_t *get_p(map_t *map, coord_player_t *coord_p, int i, int j);
coord_player_t *find_p(map_t *map, coord_player_t *coord_p);
void moves(int ch, map_t *map, coord_player_t *coord);
void go_right(map_t *map, coord_player_t *coord);
void go_left(map_t *map, coord_player_t *coord);
void go_up(map_t *map, coord_player_t *coord);
void go_down(map_t *map, coord_player_t *coord);
void display_o(map_t *map, int i, int j);
map_t *save_o(map_t *map);

//LIB
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int count_lines(char *buffer);
char *my_strncpy(char *map, char *buffer, int n);
char **my_str_to_word_array(char *buffer);

#endif /*MY_SOKOBAN_H_*/
