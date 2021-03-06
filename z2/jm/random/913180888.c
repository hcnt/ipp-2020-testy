#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 913180888
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 5, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board134210760 = gamma_board(board);
assert( board134210760 != NULL );
assert( strcmp(board134210760, 
"5...\n"
"2.22\n"
"2344\n"
"5463\n"
"615.\n") == 0);
free(board134210760);
board134210760 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
