#include "TicTacToe.h"

bool TicTacToe::win(std::string field, const char& player)
{
	//code ..
	return false;
}

bool TicTacToe::win_x(std::string field)
{
	return win(field, 'x');
}

bool TicTacToe::win_o(std::string field)
{
	return win(field, 'o');
}
