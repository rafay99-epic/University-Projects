#include<iostream>			//HEADER FILE//


using namespace std;

int main()  //MAIN FUNCTION//
{
	int choice; 		 //variable that is used to get value from the user// 	  
	int  board[25] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};		//putting the values in array//
	/*for (int i = 0; i < 25; i++)			checking the values are in array 
	{
		cout << endl;
		cout << board[i];
	}*/

	cout << "\tTick Cross Game";			//display the message of the game//
	cout << "\n\tPlayer1 [X] \n\tPlayer2 [0]\n\n";		//players in the game//

  			//game table desgin//

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
	

		cout << "\n\tPlayer1 [X] turn:";
		cin >> choice;  //getthing the value of from playere 1[x]//
		int i=0;  //variable used for loop//
		//using do while loop to get value again and again from the user//
 		do 
		{
		switch (choice)				//using switch statement to get chose the value from the case//
		{
		case 1:
			board[0] = 'X';

          cout<<static_cast<char>(board[0]);
			break;
		case 2:
			board[1] = 'X';
			cout<<static_cast<char>(board[1]);
			break;
		case 3:
			board[2] = 'X';
			cout<<static_cast<char>(board[2]);
			break;
		case 4:
			board[3] = 'X';
			cout<<static_cast<char>(board[3]);
			break;
		case 5:
			board[4] = 'X';
			cout<<static_cast<char>(board[4]);
			break;
		case 6:
			board[5] = 'X';
			cout<<static_cast<char>(board[5]);
			break;
		case 7:
			board[6] = 'X';
			cout<<static_cast<char>(board[6]);
			break;
		case 8:
			board[7] = 'X';
			cout<<static_cast<char>(board[7]);
			break;
		case 9:
			board[8] = 'X';
			cout<<static_cast<char>(board[8]);
			break;
		case 10:
			board[9] = 'X';
			cout<<static_cast<char>(board[9]);
			break;
		case 11:
			board[10] = 'X';
			cout<<static_cast<char>(board[10]);
			break;
		case 12:
			board[11] = 'X';
			cout<<static_cast<char>(board[11]);
			break;
		case 13:
			board[12] = 'X';
			cout<<static_cast<char>(board[12]);
			break;
		case 14:
			board[13] = 'X';
			cout<<static_cast<char>(board[13]);
			break;
		case 15:
			board[14] = 'X';
			cout<<static_cast<char>(board[14]);
			break;
		case 16:
			board[15] = 'X';
			cout<<static_cast<char>(board[15]);
			break;
		case 17:
			board[16] = 'X';
			cout<<static_cast<char>(board[16]);
			break;
		case 18:
			board[17] = 'X';
			cout<<static_cast<char>(board[17]);
			break;
		case 19:
			board[18] = 'X';
			cout<<static_cast<char>(board[18]);
			break;
		case 20:
			board[19] = 'X';
			cout<<static_cast<char>(board[19]);
			break;
		case 21:
			board[20] = 'X';
			cout<<static_cast<char>(board[20]);
			break;
		case 22:
			board[21] = 'X';
			cout<<static_cast<char>(board[21]);
			break;
		case 23:
			board[22] = 'X';
			cout<<static_cast<char>(board[22]);
			break;
		case 24:
			board[23] = 'X';
			cout<<static_cast<char>(board[23]);
			break;
		case 25:
			board[24] = 'X';
			cout<<static_cast<char>(board[24]);
			break;

		default:
			cout << "\nInvalid number";
			break;

		}
		if( board[0]='X'&&board[1]=='X'&&board[2]=='X'&&board[3]=='X'&&board[4]=='X')
		{
			cout<<"PLAYER 1[X]   WINS ";
		}
		else if( board[5]='X'&&board[6]=='X'&&board[7]=='X'&&board[8]=='X'&&board[9]=='X')
		{
			cout<<"PLAYER 1[X]   WINS ";
		}
		else if( board[10]='X'&&board[11]=='X'&&board[12]=='X'&&board[13]=='X'&&board[14]=='X')
		{
			cout<<"PLAYER 1[X]   WINS ";
		}
		else if( board[15]=='X'&&board[16]=='X'&&board[17]=='X'&&board[18]=='X'&&board[19]=='X')
		{
			cout<<"PLAYER 1[X]   WINS ";
		}
		else if( board[20]=='X'&&board[21]=='X'&&board[22]=='X'&&board[23]=='X'&&board[24]=='X')
		{
			cout<<"PLAYER 1[X]   WINS ";
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
		cout << "\t\t" << board[10] << "   |" << "\t" << board[11] << " |" << "\t\b" << board[12]<< "|" << "  " << board[13] << " |  " << board[14] << "\n";
		cout << "\t\t_____|_____|_____|_____|_____\n";
		cout << "\t\t     |     |     |     |\n";
		cout << "\t\t" << board[15] << "   |" << "\t" << board[16] << " |" << "\t\b" << board[17] << "|" << "  " << board[18] << " |  " << board[19]<< "\n";
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
       if( board[0]='X'&&board[1]=='O'&&board[2]=='O'&&board[3]=='O'&&board[4]=='O')
		{
			cout<<"PLAYER 2[O]   WINS ";
		}
		else if( board[5]='O'&&board[6]=='O'&&board[7]=='O'&&board[8]=='O'&&board[9]=='O')
		{
			cout<<"PLAYER 2[O]   WINS ";
		}
		else if( board[10]='O'&&board[11]=='O'&&board[12]=='O'&&board[13]=='O'&&board[14]=='O')
		{
			cout<<"PLAYER 2[O]   WINS ";
		}
		else if( board[15]=='O'&&board[16]=='O'&&board[17]=='O'&&board[18]=='O'&&board[19]=='O')
		{
			cout<<"PLAYER 2[0]   WINS ";
		}
		else if( board[20]=='O'&&board[21]=='0'&&board[22]=='O'&&board[23]=='O'&&board[24]=='O')
		{
			cout<<"PLAYER 2[O]   WINS ";
		}
		

		}
		i++;

	}while(i<25);

	return 0;
}
