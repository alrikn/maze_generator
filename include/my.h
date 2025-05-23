/*
** EPITECH PROJECT, 2024
** Wolf3D
** File description:
** Header file for the tasks today
*/

#ifndef STEVE_H
    #define STEVE_H
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include "time.h"
    #define DIR 4
    #define VALUES 19
    #define SPACE 32
    #define SIZE 21
    #define WALL '1'

typedef struct maze {
    size_t col_stack[SIZE * SIZE];
    size_t row_stack[SIZE * SIZE];
    size_t stack_index;
    int directions[DIR];
    int remaining_directions;
    size_t current_col;
    size_t current_row;
} maze_state_t;

void print_array(char const array[][SIZE]);
void maze_generator(char array[][SIZE]);
int set_start(char array[][SIZE]);
void set_end(char array[][SIZE]);
void set_values(size_t values[][VALUES], size_t column, size_t row);


#endif /* COMMON_H */
