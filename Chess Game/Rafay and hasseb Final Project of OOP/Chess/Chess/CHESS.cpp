#include "CHESS.h"
#include<iostream>
#include<string>

using namespace std;

CHESS::CHESS()
{
	cout << "Constructor called: ";
	cout << endl;

}


CHESS::~CHESS()
{
	cout << "Chess game is destoryed: ";
	delete movement;
}

void CHESS::condition(string s)
{

	string a;
	int d, f, n, b;
	cout << "\nenter the the index to move upon of d and f";
	cin >> d >> f;
	cout << "\nenter the the current index to move of n and b";
	cin >> n >> b;

	if (s == "p" || s == "P")
	{
		movement[d][f] = "P";
		movement[n][b] = " ";

	}
	if (s == "R" || s == "r")
	{
		do {
			if (movement[d][f] == "P" || movement[d][f] == "R" || movement[d][f] == "Q" || movement[d][f] == "B" || movement[d][f] == "N")
			{
				movement[d][f] = "R";
				movement[n][b] = " ";
				break;
			}
			else
				cout << "Invalid Choice.....";
			break;
		} while (1);
	}

	if (s == "B" || s == "b")
	{
		movement[d][f] = "B";
		movement[n][b] = " ";
	}
	if (s == "K" || s == "k")
	{
		movement[d][f] = "K";
		movement[n][b] = " ";
	}
	if (s == "N" || s == "n")
	{
		movement[d][f] = "N";
		movement[n][b] = " ";
	}
	if (s == "Q" || s == "q")
	{
		movement[d][f] = "Q";
		movement[n][b] = " ";
	}


}
void CHESS::display()
{

	cout << "\n\n\n\t\t  _______________________________________________________________________________________________";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t0|    " << movement[0][0] << "      |    " << movement[0][1] << "      |    " << movement[0][2] << "      |    " << movement[0][3] << "      |    " << movement[0][4] << "      |    " << movement[0][5] << "      |    " << movement[0][6] << "      |    " << movement[0][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t1|    " << movement[1][0] << "      |    " << movement[1][1] << "      |    " << movement[1][2] << "      |    " << movement[1][3] << "      |    " << movement[1][4] << "      |    " << movement[1][5] << "      |    " << movement[1][6] << "      |    " << movement[1][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t2|    " << movement[2][0] << "      |    " << movement[2][1] << "      |    " << movement[2][2] << "      |    " << movement[2][3] << "      |    " << movement[2][4] << "      |    " << movement[2][5] << "      |    " << movement[2][6] << "      |    " << movement[2][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t3|    " << movement[3][0] << "      |    " << movement[3][1] << "      |    " << movement[3][2] << "      |    " << movement[3][3] << "      |    " << movement[3][4] << "      |    " << movement[3][5] << "      |    " << movement[3][6] << "      |    " << movement[3][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t4|    " << movement[4][0] << "      |    " << movement[4][1] << "      |    " << movement[4][2] << "      |    " << movement[4][3] << "      |    " << movement[4][4] << "      |    " << movement[4][5] << "      |    " << movement[4][6] << "      |    " << movement[4][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t5|    " << movement[5][0] << "      |    " << movement[5][1] << "      |    " << movement[5][2] << "      |    " << movement[5][3] << "      |    " << movement[5][4] << "      |    " << movement[5][5] << "      |    " << movement[5][6] << "      |    " << movement[5][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t6|    " << movement[6][0] << "      |    " << movement[6][1] << "      |    " << movement[6][2] << "      |    " << movement[6][3] << "      |    " << movement[6][4] << "      |    " << movement[6][5] << "      |    " << movement[6][6] << "      |    " << movement[6][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|";
	cout << "\n\t\t |           |           |           |           |           |           |           |           |";
	cout << "\n\t\t7|    " << movement[7][0] << "      |    " << movement[7][1] << "      |    " << movement[7][2] << "      |    " << movement[7][3] << "      |    " << movement[4][4] << "      |    " << movement[7][5] << "      |    " << movement[7][6] << "      |    " << movement[7][7] << "      |";
	cout << "\n\t\t |___________|___________|___________|___________|___________|___________|___________|___________|" << endl;
	cout << "\n\t\t       0            1           2            3          4           5           6            7" << endl;
}


