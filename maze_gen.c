/*
** EPITECH PROJECT, 2025
** maze_generator
** File description:
** maze_gen
*/

#include "include/my.h"
#include <stdio.h>

/*
** for all intents and purposes, this func does nothing because
** because we set everything to being a wall befor carving through it
*/
void set_empty(char map[][SIZE])
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            map[i][j] = 0;
        }
    }
}

void print_array(char const array[][SIZE])
{
    size_t row;
    size_t column;

    for (column = 0; column < SIZE; ++column) {
        for (row = 0; row < SIZE; ++row) {
            printf("%c", array[column][row]);
        }
        fflush(stdout);
        printf("\n");
    }
}

int main(void)
{
    char labyrinth[SIZE][SIZE] = {0};
    size_t start;

    srand(time(NULL));
    set_empty(labyrinth);
    maze_generator(labyrinth);
    print_array(labyrinth);
}
