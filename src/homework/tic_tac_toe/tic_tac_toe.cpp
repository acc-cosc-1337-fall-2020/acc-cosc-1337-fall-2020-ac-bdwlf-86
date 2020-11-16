//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over() {

    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        set_winner();
        return true;
    }
    else { return false; }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    board[position - 1] = player;
    set_next_player();

    /*if(1<=position && position <=9)
    {
        board[position-1] = get_player();
        set_next_player();
    }
     */
}

void TicTacToe::set_winner()
{
    if(check_board_full())
    {
        winner = "C";
    }
    else if (player == "X")
    {
        winner = "O";
    }
    else {
        winner = "X";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto peg: board)
    {
        if(peg != "X" && peg != "O")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for(auto peg: board)
    {
        peg = " ";
    }
}

ostream& operator << (ostream& out, const TicTacToe& game)
{
    if(sqrt(game.board.size()) == 3)
    {
        out << endl
            << "| " << game.board[0] << " | " << game.board[1] << " | " << game.board[2] << " |" <<endl
            << "| " << game.board[3] << " | " << game.board[4] << " | " << game.board[5] << " |" <<endl
            << "| " << game.board[6] << " | " << game.board[7] << " | " << game.board[8] << " |" <<endl
            << endl;
    }

    else if(sqrt(game.board.size()) == 4)
    {
        out << endl
            << "| " << game.board[0] << " | " << game.board[1] << " | " << game.board[2] << " |" << game.board[3] << " |" <<endl
            << "| " << game.board[4] << " | " << game.board[5] << " | " << game.board[6] << " |" << game.board[7] << " |" <<endl
            << "| " << game.board[8] << " | " << game.board[9] << " | " << game.board[10] << " |" << game.board[11] << " |" <<endl
            << "| " << game.board[12] << " | " << game.board[13] << " | " << game.board[14] << " |" << game.board[15] << " |" <<endl
            << endl;
    }

    return out;
}

istream& operator >> (istream& in, TicTacToe& game)
{
    int position=0;
    cout << "Enter position 1 - 9 : ";
    in>>position;
    game.mark_board(position);

    return in;
}

bool TicTacToe::check_column_win() {
    return false;
}

bool TicTacToe::check_row_win() {
    return false;
}

bool TicTacToe::check_diagonal_win() {
    return false;
}


