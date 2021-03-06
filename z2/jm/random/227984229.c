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
uuid: 227984229
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 3, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
