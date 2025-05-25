#pragma once

#include <vector>
#include <string>

class TicTacToe
{
	bool m_Using_AI;
public:
	//Checking for the win of a certain player
	bool win(std::string field, const char& player);

};

