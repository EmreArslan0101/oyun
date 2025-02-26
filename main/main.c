#include <stdio.h>
#include "./include/everything.h"

int main() {
    character_t_fe test = {0,0};
    move(&test, 1, 1);
    printPos(&test);
    return 0;
}