//h
#include <string>
#include <iostream>
#include <vector>

using std::string, std::vector, std::cout, std:: cin, std::endl;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;
    string get_winner(){return winner;}

private:
    string player;
    vector<string> pegs{9," "};
    string winner;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();

};
#endif