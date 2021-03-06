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
uuid: 815761954
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 10, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );


char* board961281749 = gamma_board(board);
assert( board961281749 != NULL );
assert( strcmp(board961281749, 
"....\n"
"3...\n"
"....\n"
"4..1\n"
"4.11\n"
"43.4\n"
"1.31\n"
"4.2.\n"
"...2\n"
"143.\n") == 0);
free(board961281749);
board961281749 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );


char* board899247172 = gamma_board(board);
assert( board899247172 != NULL );
assert( strcmp(board899247172, 
"....\n"
"3...\n"
"....\n"
"4..1\n"
"4.11\n"
"43.4\n"
"1.31\n"
"4.2.\n"
"...2\n"
"143.\n") == 0);
free(board899247172);
board899247172 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


char* board469113642 = gamma_board(board);
assert( board469113642 != NULL );
assert( strcmp(board469113642, 
"....\n"
"3...\n"
"2...\n"
"4.21\n"
"4.11\n"
"43.4\n"
"1.31\n"
"4.2.\n"
"...2\n"
"143.\n") == 0);
free(board469113642);
board469113642 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 7 );


char* board498426919 = gamma_board(board);
assert( board498426919 != NULL );
assert( strcmp(board498426919, 
"....\n"
"3...\n"
"2...\n"
"4.21\n"
"4.11\n"
"4314\n"
"1.31\n"
"4.2.\n"
"...2\n"
"143.\n") == 0);
free(board498426919);
board498426919 = NULL;
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board198534358 = gamma_board(board);
assert( board198534358 != NULL );
assert( strcmp(board198534358, 
"....\n"
"3...\n"
"2...\n"
"4.21\n"
"4111\n"
"4314\n"
"1.31\n"
"422.\n"
"...2\n"
"1432\n") == 0);
free(board198534358);
board198534358 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );


gamma_delete(board);

    return 0;
}
