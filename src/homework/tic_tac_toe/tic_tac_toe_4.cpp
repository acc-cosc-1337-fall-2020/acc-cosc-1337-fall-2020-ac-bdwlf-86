#include "tic_tac_toe_4.h"


bool TicTacToe4::check_column_win() {
    for (int i = 0; i < 4; i += 1)
        if (board[0 + i] != " " &&
            board[0 + i] == board[4 + i] &&
            board[0 + i] == board[8 + i] &&
            board[0 + i] == board[12 + i])
            return true;
    return false;
}

bool TicTacToe4::check_row_win() {
    for (int i = 0; i <= 12; i += 4)
        if (board[0 + i] != " " &&
            board[0 + i] == board[1 + i] &&
            board[1 + i] == board[2 + i] &&
            board[2 + i] == board[3 + i])
            return true;
    return false;
}

bool TicTacToe4::check_diagonal_win() {
    return (board[0] != " " && board[0] == board[5] && board[0] == board[10] && board[0] == board[15]) ||
           (board[3] != " " && board[3] == board[6] && board[3] == board[9] && board[3] == board[12]);
}



