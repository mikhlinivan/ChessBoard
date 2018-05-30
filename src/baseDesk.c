#include "stdio.h"
#include "baseDesk.h"

desk *basedesk()
{
    int i,j;
    desk board[8][8];
    board.figure[0][0] = board.figure[0][7] = 'L';
    board.figure[0][1] = board.figure[0][6] = 'H';
    board.figure[0][2] = board.figure[0][5] = 'E';
    board.figure[0][3] = 'K';
    board.figure[0][4] = 'Q';
    for(i = 0; i < 8; i++) {
        board.figure[1][i] = 'P';
    }
    board.figure[7][0] = board.figure[7][7] = 'l';
    board.figure[7][1] = board.figure[7][6] = 'h';
    board.figure[7][2] = board.figure[7][5] = 'e';
    board.figure[7][3] = 'q';
    board.figure[7][4] = 'k';
    for(i = 0; i < 8; i++) {
        board.figure[6][i] = 'p';
    }
    return board[0][0];
}

void check(desk *board)
{
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            if(board->figure[i][j] == 'L' || board->figure[i][j] == 'l'
            || board->figure[i][j] == 'H' || board->figure[i][j] == 'h'
            || board->figure[i][j] == 'E' || board->figure[i][j] == 'e'
            || board->figure[i][j] == 'Q' || board->figure[i][j] == 'q'
            || board->figure[i][j] == 'K' || board->figure[i][j] == 'k'
            || board->figure[i][j] == 'P' || board->figure[i][j] == 'p') {
                board->figurePlaced = 1;
            }
            else {
                board->figurePlaced = 0;
            }
			board->x = i;
			board->y = j;
        }
    }
    return board;
}