#include "Piece.h"

typedef struct square_t {
    int col;
    int row;
    Piece* piece;
    bool empty;
} Square;

typedef Square** Board;

void print_board(Board board);

Square* new_square(int col, erow row);
Board new_board();

