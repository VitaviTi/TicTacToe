#pragma once

#include <vector>

class TicTacToe
{
	bool m_Using_AI;
public:
	//Checking for the win of a certain player
	bool win(const std::vector<std::vector<char>>& field, const char& player);

};

