//h
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

using   std::string, std::vector, std::cout, std:: cin,
        std::endl, std::ostream, std::istream, std::move,
        std::unique_ptr, std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int s) : board (s * s ," "){};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    string get_winner() const {return winner;}
    friend ostream& operator << (ostream& out, const TicTacToe& game);
    friend istream& operator >> (istream& in, TicTacToe& game);


private:
    string player;
    string winner;
    bool check_board_full();
    void clear_board();
    void set_next_player();
    void set_winner();

protected:
    virtual bool check_column_win();
    virtual bool check_diagonal_win();
    virtual bool check_row_win();
    vector<string>board;

};
#endif

