//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if(1<=position && position <=9)
    {
        pegs[position-1]= get_player();
        set_next_player();
    }
}

void TicTacToe::display_board() const
{
    for(int i=0;i<=2;++i)
    {
        if(i==0)
        {
            cout << endl;
            cout << "| " << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << " |" <<endl;
        }
        else if(i==1)
        {
            cout << "| " << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << " |" <<endl;
        }
        else
        {
            cout << "| " << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << " |" <<endl;
        }
    }

}

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{   int count = 0;

    for(int i=0; i <= 8;i++)
    {
        if(!(pegs[i] == " "))
        {
            count += 1;
        }
    }
     if(count == 9)
     {
         return true;
     }
     else
     {
         return false;
     }
}

void TicTacToe::clear_board()
{
    for(int i=0; i <= 8;i++)
    {
        pegs[i] = " ";
    }
}