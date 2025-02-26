#pragma once

typedef struct {
    int pos_y;
    int pos_x;
} character_t_fe;

void move(character_t_fe*, int, int);

void printPos(character_t_fe*);