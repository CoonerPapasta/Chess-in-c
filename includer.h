#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef char* String;

typedef enum erow {a,b,c,d,e,f,g,h} erow;
typedef enum etype {pawn, rook, bishop, knight, queen, king} etype;
typedef enum ecol {black, white} ecol;

char erow_valueof(erow r);