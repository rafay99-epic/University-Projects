#include<iostream>


using namespace std;

int main()
{
	int choice, k;
	int  board[25] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	/*for (int i = 0; i < 25; i++)
	{
		cout << endl;
		cout << board[i];
	}*/

	cout << "\tTick Cross Game";
	cout << "\n\tPlayer1 [X] \n\tPlayer2 [0]\n\n";

	for (k = 1; k <= 24; k++)
	{
		

		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[0] << "    |" << "\t" << board[1] << "  |" << "\t" << board[2] << "|" << "  " << board[3] << "  |  " << board[4] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[5] << "    |" << "\t" << board[6] << "  |" << "\t" << board[7] << "|" << "  " << board[8] << "  |  " << board[9] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[10] << "   |" << "\t" << board[11] << " |" << "\t\b" << board[12]<< "|" << "  " << board[13] << " |  " << board[14] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[15] << "   |" << "\t" << board[16] << " |" << "\t\b" << board[17] << "|" << "  " << board[18] << " |  " << board[19]<< "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[20] << "   |" << "\t" << board[21] << " |" << "\t\b" << board[22] << "|" << "  " << board[23] << " |  " << board[24] << "\n";
		cout << "\t\t     |     |     |     |\n";

		cout << "\n\tPlayer1 [X] turn:";
		cin >> choice;



		if (k == 24)
			exit(0);
		switch (choice)
		{
		case 1:
			board[0] = 'X';


			break;
		case 2:
			board[1] = 'X';
			cout << char(88) << board[1];
			break;
		case 3:
			board[2] = 'X';
			break;
		case 4:
			board[3] = 'X';
			break;
		case 5:
			board[4] = 'X';
			break;
		case 6:
			board[5] = 'X';
			break;
		case 7:
			board[6] = 'X';
			break;
		case 8:
			board[7] = 'X';
			break;
		case 9:
			board[8] = 'X';
			break;
		case 10:
			board[9] = 'X';
			break;
		case 11:
			board[10] = 'X';
			break;
		case 12:
			board[11] = 'X';
			break;
		case 13:
			board[12] = 'X';
			break;
		case 14:
			board[13] = 'X';
			break;
		case 15:
			board[14] = 'X';
			break;
		case 16:
			board[15] = 'X';
			break;
		case 17:
			board[16] = 'X';
			break;
		case 18:
			board[17] = 'X';
			break;
		case 19:
			board[18] = 'X';
			break;
		case 20:
			board[19] = 'X';
			break;
		case 21:
			board[20] = 'X';
			break;
		case 22:
			board[21] = 'X';
			break;
		case 23:
			board[22] = 'X';
			break;
		case 24:
			board[23] = 'X';
			break;
		case 25:
			board[24] = 'X';
			break;

		default:
			cout << "\nInvalid number";
			break;

		}
		system("CLS");


	      cout << "\tTick Cross Game";  
              cout << "\n\tPlayer1 [X] \n\tPlayer2 [0]\n\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[0] << "    |" << "\t" << board[1] << "  |" << "\t" << board[2] << "|" << "  " << board[3] << "  |  " << board[4] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[5] << "    |" << "\t" << board[6] << "  |" << "\t" << board[7] << "|" << "  " << board[8] << "  |  " << board[9] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[10] << "   |" << "\t" << board[11] << " |" << "\t\b" << board[12] << "|" << "  " << board[13] << " |  " << board[14] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[15] << "   |" << "\t" << board[16] << " |" << "\t\b" << board[17] << "|" << "  " << board[18] << " |  " << board[19] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[20] << "   |" << "\t" << board[21] << " |" << "\t\b" << board[22] << "|" << "  " << board[23] << " |  " << board[24] << "\n";
		cout << "\t\t     |     |     |     |\n";

		cout << "\n\tPlayer2 [O] turn:";
		cin >> choice;

		switch (choice)
		{
		case 1:
			board[0] = 'O';
			break;
		case 2:
			board[1] = 'O';
			break;
		case 3:
			board[2] = 'O';
			break;
		case 4:
			board[3] = 'O';
			break;
		case 5:
			board[4] = 'O';
			break;
		case 6:
			board[5] = 'O';
			break;
		case 7:
			board[6] = 'O';
			break;
		case 8:
			board[7] = 'O';
			break;
		case 9:
			board[8] = 'O';
			break;
		case 10:
			board[9] = 'O';
			break;
		case 11:
			board[10] = 'O';
			break;
		case 12:
			board[11] = 'O';
			break;
		case 13:
			board[12] = 'O';
			break;
		case 14:
			board[13] = 'O';
			break;
		case 15:
			board[14] = 'O';
			break;
		case 16:
			board[15] = 'O';
			break;
		case 17:
			board[16] = 'O';
			break;
		case 18:
			board[17] = 'O';
			break;
		case 19:
			board[18] = 'O';
			break;
		case 20:
			board[19] = 'O';
			break;
		case 21:
			board[20] = 'O';
			break;
		case 22:
			board[21] = 'O';
			break;
		case 23:
			board[22] = 'O';
			break;
		case 24:
			board[23] = 'O';
			break;
		case 25:
			board[24] = 'O';
			break;

		default:
			cout << "\nInvalid number";
			break;

		}

	}

	return 0;
}
