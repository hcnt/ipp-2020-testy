#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 358929229
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 21, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 30, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 27, 1, 7) == 1 );
assert( gamma_move(board, 22, 1, 9) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 16, 8, 8) == 1 );
assert( gamma_move(board, 20, 6, 6) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 19, 1, 0) == 1 );
assert( gamma_move(board, 21, 7, 4) == 1 );
assert( gamma_move(board, 20, 4, 4) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 16, 4, 7) == 1 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 20, 2, 2) == 1 );
assert( gamma_move(board, 16, 9, 3) == 1 );
assert( gamma_move(board, 15, 2, 4) == 1 );
assert( gamma_move(board, 21, 8, 2) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 21, 3, 2) == 1 );
assert( gamma_move(board, 17, 1, 2) == 1 );
assert( gamma_move(board, 29, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 22, 3, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 17, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 26, 7, 6) == 1 );
assert( gamma_move(board, 12, 9, 5) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 14, 1, 1) == 1 );
assert( gamma_move(board, 21, 4, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 17, 7, 0) == 1 );
assert( gamma_move(board, 15, 4, 9) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 14, 0, 0) == 1 );
assert( gamma_move(board, 11, 5, 5) == 1 );
assert( gamma_move(board, 14, 5, 7) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 17, 8, 0) == 1 );
assert( gamma_move(board, 20, 6, 9) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 22, 8, 4) == 1 );
assert( gamma_move(board, 17, 9, 9) == 1 );
assert( gamma_move(board, 21, 4, 3) == 1 );
assert( gamma_move(board, 24, 9, 8) == 1 );
assert( gamma_move(board, 16, 9, 0) == 1 );
assert( gamma_move(board, 19, 2, 1) == 1 );
assert( gamma_move(board, 22, 2, 3) == 1 );
assert( gamma_move(board, 16, 9, 4) == 1 );
assert( gamma_move(board, 27, 5, 0) == 1 );
assert( gamma_move(board, 22, 7, 8) == 1 );
assert( gamma_move(board, 25, 2, 7) == 1 );
assert( gamma_move(board, 19, 7, 5) == 1 );
assert( gamma_move(board, 30, 6, 3) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 28, 6, 5) == 1 );
assert( gamma_move(board, 27, 7, 3) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 14, 6, 7) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 24, 3, 7) == 1 );
assert( gamma_move(board, 21, 5, 4) == 1 );
assert( gamma_move(board, 18, 8, 1) == 1 );
assert( gamma_move(board, 16, 5, 9) == 1 );
assert( gamma_move(board, 24, 4, 8) == 1 );
assert( gamma_move(board, 14, 0, 8) == 1 );
assert( gamma_move(board, 25, 1, 8) == 1 );
assert( gamma_move(board, 20, 4, 6) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 22, 7, 9) == 1 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 15, 8, 5) == 1 );
assert( gamma_move(board, 29, 8, 3) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 16, 2, 9) == 1 );
assert( gamma_move(board, 15, 3, 3) == 1 );
assert( gamma_move(board, 20, 7, 2) == 1 );
assert( gamma_move(board, 19, 0, 9) == 1 );
assert( gamma_move(board, 19, 4, 0) == 1 );
assert( gamma_move(board, 23, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 27, 7, 1) == 1 );
assert( gamma_move(board, 21, 8, 6) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 21, 3, 8) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );


gamma_delete(board);

    return 0;
}
