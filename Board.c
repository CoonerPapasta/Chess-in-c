#include "Board.h"

void print_board(Board board){
    for (int i = 0; i < 8; i++) {
        printf("\n[");
        char x = erow_valueof(&(*board)->row);
//        while ((*board) -> col <= 8) {
//            (*board)++;
//        }
        printf("%c", x);
        printf("]");
    }
}

Square* new_square(int col, erow row) {
    Square* square = malloc(sizeof(Square));
    square -> col = col;
    square -> row = row;
    square -> piece = NULL;
    square -> empty = true;
}

Board new_board() {
    Board board = malloc(sizeof(Square*) * 64);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            *(board + i + (j * 8)) = new_square(j + 1, i);
        }
    }
}