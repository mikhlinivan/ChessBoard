#include "stdio.h"
#include "baseDesk.h"
#include "turn.h"

desk *turn_fig_choice (desk *board)
{
    int line, calk_collom;
    char collom;
    printf("put collom and line of figure: ");
    scan:
    scanf("%c %d", &collom, &line);
    printf("\n");
    switch(collom) {
        case 'A':
        case 'a':
            calk_collom = 0;
        break;
        case 'B':
        case 'b':
            calk_collom = 1;
        break;
        case 'C':
        case 'c':
            calk_collom = 2;
        break;
        case 'D':
        case 'd':
            calk_collom = 3;
        break;
        case 'E':
        case 'e':
            calk_collom = 4;
        break;
        case 'F':
        case 'f':
            calk_collom = 5;
        break;
        case 'G':
        case 'g':
            calk_collom = 6;
        break;
        case 'H':
        case 'h':
            calk_collom = 7;
        break;
        default:
            printf("put correct collom and line");
            goto scan;
    }
    if(line > 7 || line < 0) {
        printf("put correct collom and line: ");
        goto scan;
    }
    if(board->figurePlaced[line][calk_collom] == 0) {
        printf("put collom and line with figure: ");
        goto scan;
    }
    return board[line][calk_collom];
}

desk *turn_pose_pick(desk *board)
{
	int line, calk_collom;
    char collom;
	printf("put collom and line: ");
	scan2:
	scanf("%c %d", &collom, &line);
	switch(collom) {
        case 'A':
        case 'a':
            calk_collom = 0;
        break;
        case 'B':
        case 'b':
            calk_collom = 1;
        break;
        case 'C':
        case 'c':
            calk_collom = 2;
        break;
        case 'D':
        case 'd':
            calk_collom = 3;
        break;
        case 'E':
        case 'e':
            calk_collom = 4;
        break;
        case 'F':
        case 'f':
            calk_collom = 5;
        break;
        case 'G':
        case 'g':
            calk_collom = 6;
        break;
        case 'H':
        case 'h':
            calk_collom = 7;
        break;
        default:
            printf("put correct collom and line");
            goto scan2;
    }
    if(line > 7 || line < 0) {
        printf("put correct collom and line: ");
        goto scan2;
    }
	return board[line][calk_collom];
}