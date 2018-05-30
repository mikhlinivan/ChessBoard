#include "stdio.h"

typedef struct {
	int x;
	int y;
    int figurePlaced; //есть ли фигура
    char figure; //имя фигуры если есть
} desk;

desk *basedesk ();
void check(desk *board);