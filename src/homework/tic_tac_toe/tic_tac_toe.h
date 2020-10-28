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

private:
    string player;
    vector<string> pegs{9," "};
    void set_next_player();
    bool check_board_full();
    void clear_board();

};
#endif