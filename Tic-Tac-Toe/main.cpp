#include <iostream>
#include <vector>

#include "TicTacToe.h"

int main()
{
	std::string str = "0xt00xx 0";

	TicTacToe game;

	std::cout << game.win(str, '0') << std::endl;
	std::cout << game.win(str, 'x') << std::endl;

	std::cout << game.win(str, '+') << std::endl;

	std::cin.get();
	return 0;
}