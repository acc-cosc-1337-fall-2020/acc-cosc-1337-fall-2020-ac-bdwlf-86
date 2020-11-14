//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class TicTacToe3: public TicTacToe{

    bool check_column_win() override;
    bool check_diagonal_win() override;
    bool check_row_win() override;

public:
    TicTacToe3() :  TicTacToe(3){}
};

#endif