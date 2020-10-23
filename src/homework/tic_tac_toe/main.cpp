#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game;
    string first_player;
    int position;
    bool status;

    game.start_game(first_player);
    do
    {
        game.display_board();

        cout << "Enter position 1 - 9 : ";
        cin >> position;

        game.mark_board(position);
        status = game.game_over();

    } while(!status);

    game.display_board();

  	return 0;
}