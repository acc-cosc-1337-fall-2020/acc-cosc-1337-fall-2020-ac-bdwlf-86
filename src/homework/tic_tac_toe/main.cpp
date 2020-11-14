#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

int main() 
{
    unique_ptr<TicTacToe> game;
    TicTacToeManager list;

    string first_player;
    char a, b;
    bool status;
    int board_size;

    do
    {
        cout << endl
             << "Please type 3 or 4 to select game type: ";
        cin >> board_size;
        while (board_size == 3 || board_size == 4)
        {
            if (board_size == 3)
            {
                game = make_unique<TicTacToe3>();
            }

            else
            {
                game = make_unique<TicTacToe4>();
            }

        }

        cout << "Enter X or O :";
        cin >> a;
        first_player = toupper(a);

        game->start_game(first_player);
        do
        {
            cout << *game;
            cin >> *game;
            status = game->game_over();

        } while(!status);

        cout << *game;
        list.save_game(move(game));

        cout << endl
             << "Do you want to play again? Y or N";
        cin >> b;
        b = toupper(b);

    } while(b == 'Y');

    cout << list;

    return 0;
}