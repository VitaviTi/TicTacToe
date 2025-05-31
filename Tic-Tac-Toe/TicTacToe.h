#pragma once

#include <vector>
#include <string>

class TicTacToe
{
	//Checking for the win of a certain player
	bool win(std::string field, const char& player);
	
public:
	bool win_x(std::string field);
	bool win_o(std::string field);
};

