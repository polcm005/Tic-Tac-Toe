#include <iostream>
#include <vector>

void display_board(std::vector<std::string> board){
    std::cout << "\n" << board[0] << board[1] << board[2];
    std::cout << "      1 " << " 2 " << " 3 "  << "\n";
    std::cout << board[3] << board[4] << board[5];
    std::cout << "      4 " << " 5 " << " 6 "  << "\n";
    std::cout << board[6] << board[7] << board[8];
    std::cout << "      7 " << " 8 " << " 9 "  << "\n\n";
  }

int ask_player(std::string player){
  int player_choice;
  std::cout << "Player " << player <<", pick a position to place your letter \n\n";
  std::cin >> player_choice;
  return player_choice;
  }

void winner_found(std::vector<std::string> board, bool& player_X, bool& player_O){
  if (" X " == board[0] && " X " == board[1] && " X "== board[2]){
    player_X = true;
  }
  else if (" O " == board[0] && " O " == board[1] && " O "== board[2]){
    player_O = true;
  }
}

void amend_board(std::vector<std::string>& board, std::string which_player, int players_choice){
  board[players_choice - 1] = which_player;
}