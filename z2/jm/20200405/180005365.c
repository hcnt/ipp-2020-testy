#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: test_golden_move
uuid: 180005365
*/
/*
golden_move, limited areas
*/
gamma_t* board = gamma_new(8, 8, 3, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );


assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );


assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );


assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );


assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );


assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );


assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );


assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );


assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );


assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );


gamma_delete(board);

    return 0;
}
