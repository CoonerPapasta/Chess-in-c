#include "Piece.h"

Piece* create_piece(int col, erow row, etype type, ecol color) {
    Piece* piece = malloc(sizeof(Piece));
    piece -> col = col;
    piece -> row = row;
    piece -> type = type;
    piece -> color = color;

    return piece;
}

char erow_valueof(erow r){
    switch (r) {
        case a: return 'a';
        case b: return 'b';
        case c: return 'c';
        case d: return 'd';
        case e: return 'e';
        case f: return 'f';
        case g: return 'g';
        case h: return 'h';
        default: return '#';
    }
}