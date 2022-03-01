#include<iostream>


using namespace std;
char board[5][5] = { {'1','2','3','4','5'},{'6','7','8','9','10'},{'11','12','13','14','15'},{'16','17','18','19','20'},{'21','22','23','24','25'} };

void layout_game();

int main()
{
	int choice, k;
	
	system("COLOR 97");
	cout << "\tTick Cross Game";
	cout << "\n\tPlayer1 [X] \n\tPlayer2 [O]\n\n";
	for (k = 1; k <=25; k++)

	{
		layout_game();

cout << "\n\tPlayer1 [X] turn:";
cin >> choice;

if (k == 5)
exit(0);
switch (choice)
{
case 1:
	board[0][0] = 'X';
	break;
case 2:
	board[0][1] = 'X';
	break;
case 3:
	board[0][2] = 'X';
	break;
case 4:
	board[1][0] = 'X';
	break;
case 5:
	board[1][1] = 'X';
	break;
case 6:
	board[1][2] = 'X';
	break;
case 7:
	board[2][0] = 'X';
	break;
case 8:
	board[2][1] = 'X';
	break;
default:
	board[2][2] = 'X';
	break;

}
layout_game();
cout << "\n\tPlayer2 [O] turn:";
cin >> choice;

switch (choice)
{
case 1:
	board[0][0] = 'O';
	break;
case 2:
	board[0][1] = 'O';
	break;
case 3:
	board[0][2] = 'O';
	break;
case 4:
	board[1][0] = 'O';
	break;
case 5:
	board[1][1] = 'O';
	break;
case 6:
	board[1][2] = 'O';
	break;
case 7:
	board[2][0] = 'O';
	break;
case 8:
	board[2][1] = 'O';
	break;
default:
	board[2][2] = 'O';
	break;
}

	}

	return 0;
}

void layout_game()
{
cout << "\t\t_____________________________\n";
cout << "\t\t\b|     |     |     |     |\n";
cout << "\t\t\b|" << board[0][0] << "    |" << "\t" << board[0][1] << "  |" << "\t" << board[0][2] << "|" << "  " << board[0][3] << "  |  " << board[0][4] << "\n";
cout << "\t\t\b|_____|_____|_____|_____|_____\n";
cout << "\t\t\b|     |     |     |     |\n";
cout << "\t\t\b|" << board[1][0] << "    |" << "\t" << board[1][1] << "  |" << "\t" << board[1][2] << "|" << "  " << board[1][3] << "  |  " << board[1][4] << "\n";
cout << "\t\t\b|_____|_____|_____|_____|_____\n";
cout << "\t\t\b|     |     |     |     |\n";
cout << "\t\t\b|" << board[2][0] << "    |" << "\t" << board[2][1] << "  |" << "\t" << board[2][2] << "|" << "  " << board[2][3] << "  |  " << board[2][4] << "\n";
cout << "\t\t\b|_____|_____|_____|_____|_____\n";
cout << "\t\t\b|     |     |     |     |\n";
cout << "\t\t\b|" << board[3][0] << "    |" << "\t" << board[3][1] << "  |" << "\t" << board[3][2] << "|" << "  " << board[3][3] << "  |  " << board[3][4] << "\n";
cout << "\t\t\b|_____|_____|_____|_____|_____\n";
cout << "\t\t\b|     |     |     |     |\n";
cout << "\t\t\b|" << board[4][0] << "    |" << "\t" << board[4][1] << "  |" << "\t" << board[4][2] << "|" << "  " << board[4][3] << "  |  " << board[4][4] << "\n";
cout << "\t\t\b|_____________________________\n";
}

