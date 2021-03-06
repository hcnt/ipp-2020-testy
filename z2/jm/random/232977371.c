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
uuid: 232977371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 11, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );


char* board373400500 = gamma_board(board);
assert( board373400500 != NULL );
assert( strcmp(board373400500, 
"3....\n"
"....6\n"
".....\n"
".5...\n"
"....6\n"
"4...8\n"
"...57\n"
"4.1..\n"
".....\n"
".7..2\n"
"32...\n") == 0);
free(board373400500);
board373400500 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_golden_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_free_fields(board, 5) == 29 );


char* board637639793 = gamma_board(board);
assert( board637639793 != NULL );
assert( strcmp(board637639793, 
"3..2.\n"
"52..6\n"
"45867\n"
".5...\n"
"....6\n"
"4...8\n"
"...57\n"
"431..\n"
"..8..\n"
".73.2\n"
"121..\n") == 0);
free(board637639793);
board637639793 = NULL;
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );


char* board220575151 = gamma_board(board);
assert( board220575151 != NULL );
assert( strcmp(board220575151, 
"35227\n"
"52..6\n"
"45867\n"
".5.6.\n"
"....6\n"
"4..68\n"
"...47\n"
"43177\n"
".88.3\n"
"273.2\n"
"1218.\n") == 0);
free(board220575151);
board220575151 = NULL;
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );


char* board289900087 = gamma_board(board);
assert( board289900087 != NULL );
assert( strcmp(board289900087, 
"35227\n"
"52..6\n"
"45867\n"
".5.63\n"
"....6\n"
"4..68\n"
"4..47\n"
"43177\n"
".8883\n"
"27372\n"
"1218.\n") == 0);
free(board289900087);
board289900087 = NULL;
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );


char* board844863086 = gamma_board(board);
assert( board844863086 != NULL );
assert( strcmp(board844863086, 
"35227\n"
"52.86\n"
"45867\n"
".5.63\n"
"...26\n"
"4..68\n"
"4..47\n"
"43177\n"
".8883\n"
"27372\n"
"1218.\n") == 0);
free(board844863086);
board844863086 = NULL;
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_move(board, 6, 10, 2) == 0 );


gamma_delete(board);

    return 0;
}
