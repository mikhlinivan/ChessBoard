#include "stdio.h"

typedef struct {
    int figurePlaced; //есть ли фигура
    char figure; //имя фигуры если есть
} desk;

desk *basedesk ();
void check(desk *board);