#include "stdio.h"
#include "baseDesk.h"
#include "turn.h"

void turn_of_fig(desk *selected_figure, desk *selected_pose, desk *board, int *p_turn, int *pe_turn); //p для белых, pe для черных
{
	int i, j, turndone;
	turndone = 0;
	j = 0;
	if((selected_figure->figure == 'L' || selected_figure->figure == 'l') && ((selected_pose->x == selected_figure->x && selected_pose->y != selected_figure->y)|| (selected_pose->y == selected_figure->y && selected_pose->x != selected_figure->x))) {
		selected_figure->figurePlaced = 0;
		board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
		if(selected_figure->figure == 'L') {
			board->figure[selected_pose->x][selected_pose->y] = 'L';
		}
		else {
			board->figure[selected_pose->x][selected_pose->y] = 'l';
		}
		turndone = 1;
	}
	
	if(selected_figure->figure == 'e' || selected_figure->figure == 'E') {
		for(i = 0; i < 8; i++) {
			j++;
			if((selected_pose->x == selected_figure->x + i) && (selected_pose->y  == selected_figure->y + j)) {
				selected_figure->figurePlaced = 0;
				board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
				if(selected_figure->figure == 'E') {
					board->figure[selected_pose->x][selected_pose->y] = 'E';
				}
				else {
					board->figure[selected_pose->x][selected_pose->y] = 'e';
				}
				turndone = 1;
			}
		}
		j = 7;
		for(i = 0; i > 8; i++) {
			j--;
			if((selected_pose->x == selected_figure->x + i) && (selected_pose->y  == selected_figure->y + j)) {
				selected_figure->figurePlaced = 0;
				board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
				if(selected_figure->figure == 'E') {
					board->figure[selected_pose->x][selected_pose->y] = 'E';
				}
				else {
					board->figure[selected_pose->x][selected_pose->y] = 'e';
					
				}
				turndone = 1;
			}
		}
	}
	
	if(selected_figure->figure == 'P') {
		if((board->figurePlaced[selected_pose->x][selected_pose->y] == 1) && (selected_pose->x == selected_figure->x + 1 || selected_pose->x == selected_figure->x - 1) && (selected_pose->y == selected_figure->y + 1) {
			selected_figure->figurePlaced = 0;
			board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
			board->figure[selected_pose->x][selected_pose->y] = 'P';
			turndone = 1;
		}
		if(selected_pose->x == selected_figure->x && selected_pose->y == selected_figure->y + 1) {
			selected_figure->figurePlaced = 0;
			board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
			board->figure[selected_pose->x][selected_pose->y] = 'P';
			turndone = 1;
		}
		if(selected_pose->x == selected_figure->x && selected_pose->y == selected_figure->y + 2 && pe_turn[selected_pose->x]
	}
	
	if(selected_figure->figure == 'p') {
		if((board->figurePlaced[selected_pose->x][selected_pose->y] == 1) && (selected_pose->x == selected_figure->x - 1 || selected_pose->x == selected_figure->x + 1) && (selected_pose->y == selected_figure->y - 1) {
			selected_figure->figurePlaced = 0;
				board->figurePlaced[selected_pose->x][selected_pose->y] = 1;
				if(selected_figure->figure == 'E') {
					board->figure[selected_pose->x][selected_pose->y] = 'P';
				}
				turndone = 1;
		}