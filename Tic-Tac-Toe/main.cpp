#include <iostream>
#include <vector>

#include "TicTacToe.h"

int main()
{
	std::string str = "oxtooxx o";

	TicTacToe game;

	std::cout << game.win_o(str) << std::endl;
	std::cout << game.win_x(str) << std::endl;

	str += 'q';
	std::cout << game.win_x(str) << std::endl;

	std::cin.get();
	return 0;
}