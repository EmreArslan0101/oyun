#include "everything.h"

void move(character_t_fe* character, int x,int y) {
    character->pos_x += x;
    character->pos_y += y;
}

void printPos(character_t_fe* character) {
    printf("X: %d, Y: %d\n", character->pos_x, character->pos_y);
}