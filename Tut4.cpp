#include<iostream>
using namespace std;

class TicTacToe
{
public: int reset();
		int board[3][3];
		int player; //player1=1 player2=2
		void DisplayBoard();
		void NextPlayer();
		int move(int,int);
		int gameOver;
		int over();
};

int TicTacToe::reset()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = 0;
	player = 1; //player 1's turn 
	DisplayBoard();
}
	
void TicTacToe::DisplayBoard()
{
	int temp[9];
	int k = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)


		{
			if (board[i][j] == 0)
				temp[k] = k + 49;
			else


			{
				if (board[i][j] == 1)
					temp[k] = 88;
				else
					temp[k] = 79;
			}
			k++;
		}
	cout << "+---+---+---+\n";
	cout << "| " << (char)temp[0] << " | " << (char)temp[1] << " | " << (char)temp[2] << " | \n";
	cout << "+---+---+---+\n";
	cout << "| " << (char)temp[3] << " | " << (char)temp[4] << " | " << (char)temp[5] << " | \n";
	cout << "+---+---+---+\n";
	cout << "| " << (char)temp[6] << " | " << (char)temp[7] << " | " << (char)temp[8] << " | \n";
	cout << "+---+---+---+\n";
}
	
void TicTacToe::NextPlayer()
	{
		if (player == 1)
			player = 2;
		else
			player = 1;
	}

int TicTacToe::move(int row, int col)
	{
      
	}

	void TicTacToe::over()
{
	if ((board[0][0] == turn) && (board[1][0] == turn) && (board[2][0] == turn))
		gameOver = turn;
	else if ((board[0][1] == turn) && (board[1][1] == turn) && (board[2][1] == turn))
	    gameOver = turn;
	else if ((board[0][2] == turn) && (board[1][2] == turn) && (board[2][2] == turn))
		gameOver = turn;
	else if ((board[0][0] == turn) && (board[0][1] == turn) && (board[0][2] == turn))
		gameOver = turn;
	else if ((board[1][0] == turn) && (board[1][1] == turn) && (board[1][2] == turn))
		gameOver = turn;
	else if ((board[2][0] == turn) && (board[2][1] == turn) && (board[2][2] == turn))
		gameOver = turn;
	else if ((board[0][0] == turn) && (board[1][1] == turn) && (board[2][2] == turn))
		gameOver = turn;
	else if ((board[0][2] == turn) && (board[1][1] == turn) && (board[2][0] == turn))
		gameOver = turn;
	}

int main()
{
	TicTacToe obj;
	obj.DisplayBoard();
}
