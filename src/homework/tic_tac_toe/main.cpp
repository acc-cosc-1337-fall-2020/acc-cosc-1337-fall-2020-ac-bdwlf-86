#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() 
{
    TicTacToe game;
    TicTacToeManager list;
    string first_player;
    char a, b;
    bool status;

    do
    {
        cout << "Enter X or O :";
        cin >>a;
        first_player = toupper(a);

        game.start_game(first_player);
        do
        {
            cout << game;
            cin >> game;
            status = game.game_over();

        } while(!status);

        cout << game;
        list.save_game(game);

        cout << endl
             << "Do you want to play again? Y or N";
        cin >> b;
        b = toupper(b);

    } while(b == 'Y');

    cout << list;

    return 0;
}