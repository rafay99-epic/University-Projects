#include<iostream>

using namespace std;

void board();
void player_turn();

int row, col;
char turn = 'X';

int main()
{
	while (true)
	{
		board();
		player_turn();
		board();
	}
}


void player_turn()
{
	int choice;

	//	if(turn=='X')
	//	cout<<"\n Player 1 [X] turn:";

		//	if(turn=='O')

	string board[5][5] = { {"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"} };
	system("cls");
	cout << board[0][0] << "\t" << board[0][1] << "\t" << board[0][2] << "\t" << board[0][3] << "\t" << board[0][4] << "\n";
	cout << board[1][0] << "\t" << board[1][1] << "\t" << board[1][2] << "\t" << board[1][3] << "\t" << board[1][4] << "\n";
	cout << board[2][0] << "\t" << board[2][1] << "\t" << board[2][2] << "\t" << board[2][3] << "\t" << board[2][4] << "\n";
	cout << board[3][0] << "\t" << board[3][1] << "\t" << board[3][2] << "\t" << board[3][3] << "\t" << board[3][4] << "\n";
	cout << board[4][0] << "\t" << board[4][1] << "\t" << board[4][2] << "\t" << board[4][3] << "\t" << board[4][4] << "\n";




	cout << "\n Player 1 [X] turn:";
	cin >> choice;
	switch (choice)
	{
	case 1:row = 0; col = 0; break;
	case 2:row = 0; col = 1; break;
	case 3:row = 0; col = 2; break;
	case 4:row = 0; col = 3; break;
	case 5:row = 0; col = 4; break;
	case 6:row = 1; col = 0; break;
	case 7:row = 1; col = 1; break;
	case 8:row = 1; col = 2; break;
	case 9:row = 1; col = 3; break;
	case 10:row = 1; col = 4; break;
	case 11:row = 2; col = 0; break;
	case 12:row = 2; col = 1; break;
	case 13:row = 2; col = 2; break;
	case 14:row = 2; col = 3; break;
	case 15:row = 2; col = 4; break;
	case 16:row = 3; col = 0; break;
	case 17:row = 3; col = 1; break;
	case 18:row = 3; col = 2; break;
	case 19:row = 3; col = 3; break;
	case 20:row = 3; col = 4; break;
	case 21:row = 4; col = 0; break;
	case 22:row = 4; col = 1; break;
	case 23:row = 4; col = 2; break;
	case 24:row = 4; col = 3; break;
	case 25:row = 4; col = 4; break;

	default:
		cout << "Invalid Choice.....";
		break;
	}
	if (turn == 'X')
	{
		board[row][col] = 'X';
		cout << board[row][col];
		turn = 'O';
	}
	else if (turn == 'O')
	{
		board[row][col] = 'O';
		cout << board[row][col];
		turn = 'X';
	}

}


void board()
{
	string board[5][5] = { {"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"} };
	system("cls");
	cout << board[0][0] << "\t" << board[0][1] << "\t" << board[0][2] << "\t" << board[0][3] << "\t" << board[0][4] << "\n";
	cout << board[1][0] << "\t" << board[1][1] << "\t" << board[1][2] << "\t" << board[1][3] << "\t" << board[1][4] << "\n";
	cout << board[2][0] << "\t" << board[2][1] << "\t" << board[2][2] << "\t" << board[2][3] << "\t" << board[2][4] << "\n";
	cout << board[3][0] << "\t" << board[3][1] << "\t" << board[3][2] << "\t" << board[3][3] << "\t" << board[3][4] << "\n";
	cout << board[4][0] << "\t" << board[4][1] << "\t" << board[4][2] << "\t" << board[4][3] << "\t" << board[4][4] << "\n";
}

