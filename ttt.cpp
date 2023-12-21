#include <iostream>
#include "ttt_functions.hpp"
#include <vector>

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

  
}