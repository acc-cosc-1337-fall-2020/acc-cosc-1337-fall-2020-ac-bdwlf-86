#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test first player set to X for 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O for 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test first player set to X for 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O for 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("Tic Tac Toe Game Verification for 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == true);
}

TEST_CASE("Tic Tac Toe Game Verification for 4x4") {
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first column 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from top right 3x3")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe3>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first column 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth column 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top right 4x4")
{
    unique_ptr<TicTacToe> game;
    game = make_unique<TicTacToe4>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

