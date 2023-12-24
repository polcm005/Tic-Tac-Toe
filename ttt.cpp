#include <iostream>
#include "ttt_functions.hpp"
#include <vector>

// void display_board(std::vector<std::string> board){
//     std::cout << "\n" << board[0] << board[1] << board[2];
//     std::cout << "      1 " << " 2 " << " 3 "  << "\n";
//     std::cout << board[3] << board[4] << board[5];
//     std::cout << "      4 " << " 5 " << " 6 "  << "\n";
//     std::cout << board[6] << board[7] << board[8];
//     std::cout << "      7 " << " 8 " << " 9 "  << "\n\n";
//   }

// int ask_player(std::string player){
//   int player_choice;
//   std::cout << "Player " << player <<", pick a position to place your letter \n\n";
//   std::cin >> player_choice;
//   return player_choice;
//   }

// void winner_found(std::vector<std::string> board, bool& player_X, bool& player_O){
//   if (" X " == board[0] && " X " == board[1] && " X "== board[2]){
//     player_X = true;
//   }
//   else if (" O " == board[0] && " O " == board[1] && " O "== board[2]){
//     player_O = true;
//   }
// }

// void amend_board(std::vector<std::string>& board, std::string which_player, int players_choice){
//   board[players_choice - 1] = which_player;
// }

int main(){
  
  int player_X_input;
  int player_O_input;

  std::vector<std::string> board(9, " - ");

  bool player_X_wins = false;
  bool player_O_wins = false;

  int i = 0;

  while (player_X_wins == false && player_O_wins == false && i < 9){
    if (player_O_wins == false && i < 9){
      display_board(board);
      player_X_input = ask_player("X");
      amend_board(board, " X ", player_X_input);
      winner_found(board, player_X_wins, player_O_wins);
    }

    i++;

    if (player_X_wins == false && i < 9){
      display_board(board);
      player_O_input = ask_player("O");
      amend_board(board, " O ", player_O_input);
      winner_found(board, player_X_wins, player_O_wins);
      }
    i++;
    
  }

  if (player_X_wins == true) {
    display_board(board);
    std::cout << "Player X wins!";
  }
  else if (player_O_wins == true){
    display_board(board);
    std::cout << "Player O wins!";
  } else {
    std::cout << "Player X and player O draw";
  }

  return 0;
}