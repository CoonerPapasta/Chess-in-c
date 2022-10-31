#include "includer.h"

typedef struct piece_t {
    int col;
    erow row;
    etype type;
    ecol color;
} Piece;

Piece* create_piece(int col, erow row, etype type, ecol color);