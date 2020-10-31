#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game;
    string first_player;
    char a, b;
    int position;
    bool status;

    do
    {
        cout << "Enter X or O :";
        cin >>a;
        first_player = toupper(a);

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

        cout << endl
             << "Winner is Player " << game.get_winner() << " !!!" <<endl
             << endl
             << "Do you want to play another game? (Y or N)";
        cin >> b;
        b = toupper(b);

    } while(b == 'Y');

    return 0;
}