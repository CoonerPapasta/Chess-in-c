#include "Board.h"

void print_board(Board board){
    for (int i = 0; i < 8; i++) {
        printf("\n[");
        while ((*board) -> col <= 8) {
            printf("%c%d", erow_valueof((*board)->row), (*board)->col);
            board++;
        }
        printf("]");
    }
}

Square* new_square(int col, erow row) {
    Square* square = malloc(sizeof(Square));
    square -> col = col;
    square -> row = row;
    square -> piece = NULL;
    square -> empty = true;
    return square;
}

Board new_board() {
    Board board = malloc(sizeof(Square*) * 64);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            *(board + i + (j * 8)) = new_square(j + 1, i);
        }
    }
    return board;
}