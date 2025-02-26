#include "everything.h"

void move(character_t_fe* character, int x,int y) {
    character->pos_x += x;
    character->pos_y += y;
}