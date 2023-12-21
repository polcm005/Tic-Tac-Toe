#include <vector>

// Declare functions
void display_board(std::vector<std::string> board);

int ask_player(std::string player);

void winner_found(std::vector<std::string> board, bool& player_X, bool& player_O);

void amend_board(std::vector<std::string>& board, std::string which_player, int players_choice);