//cpp

#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe> b)
{
    games.push_back(move(b));
    update_winner_count(b->get_winner());
    get_winner_total(o_win, x_win, tie);
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for(auto & game : manager.games)
    {
        out << *game;
    }
    return out;
}
void TicTacToeManager :: get_winner_total(int& o, int& x, int& t)
{
    cout << endl
         << "X Wins =" << x << endl
         << "O Wins =" << o << endl
         << "Ties =" << t << endl
         << endl;
}

void TicTacToeManager :: update_winner_count(string winner)
{
    if(winner== "X")
        x_win++;
    else if(winner =="O")
        o_win++;
    else
         tie++;
}


