#include <iostream>
//makeMove by Anthony Chen, incomplete

void makeMove(std::string &board, char piece){
	int col = 0;
	do {
		std::cout << "choose column to place piece (1-7)" << std::endl;
		std::cin >> col;
		if (col < 1 || col > 7){
			std::cout << "invalid choice" << std::endl;
		}
	}while (col < 1 || col > 7)
	bool piece = true;
	for (int i = 0; i < 6; i++){
		if (checkAvail(board[i][col]) && piece == true){
			board[i][col] = piece;
			piece = false;
		}
	}
	checkWin(board)
}