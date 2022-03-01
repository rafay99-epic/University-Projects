#include<iostream>
#include<string.h>

using namespace std;
string board[5][5]={{"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"}};
void display_board();
void player_turn();
int main()
{
	display_board();
	player_turn();
	display_board();
	return 0;
}

void display_board()
{

	cout<<"\t\tTick Cross Game\n";
	cout<<"\tPalyer 1 [X]\n\tPlayer 2 [O]\n";
	cout<<"\n\nPlayer 1[X] Turn:";
	
	cout<<"\t\t     |     |     |     |     \n";
	cout<<"\t\t    "<<board[0][0]  <<"|    "<<board[0][1]  <<"|    "<<board[0][2]  <<"|    "<<board[0][3]  <<"|  "<<board[0][4] <<"\n";
	cout<<"\t\t_____|_____|_____|_____|_____\n";
	cout<<"\t\t     |     |     |     |     \n";
	cout<<"\t\t    "<<board[1][0]  <<"|    "<<board[1][1]  <<"|    "<<board[1][2]  <<"|    "<<board[1][3]  <<"|  "<<board[1][4] <<"\n";
	cout<<"\t\t_____|_____|_____|_____|_____\n";
	cout<<"\t\t     |     |     |     |     \n";
	cout<<"\t\t   "<<board[2][0]  <<"|   "<<board[2][1]  <<"|  "<<board[2][2]  <<" |  "<<board[2][3]  <<" |  "<<board[2][4] <<"\n";
	cout<<"\t\t_____|_____|_____|_____|_____\n";
	cout<<"\t\t     |     |     |     |     \n";
	cout<<"\t\t   "<<board[3][0]  <<"|   "<<board[3][1]  <<"|  "<<board[3][2]  <<" |  "<<board[3][3]  <<" |  "<<board[3][4] <<"\n";
	cout<<"\t\t_____|_____|_____|_____|_____\n";
	cout<<"\t\t     |     |     |     |     \n";
	cout<<"\t\t   "<<board[4][0]  <<"|   "<<board[4][1]  <<"|  "<<board[4][2]  <<" |  "<<board[4][3]  <<" |  "<<board[4][4] <<"\n";
	cout<<"\t\t     |     |     |     |     \n";
}

void player_turn()
{	
int choice;
	cin>>choice;
		switch(choice)
	{	
		case 1:
			board[0][0]='X';
			break;
		case 2:
			board[0][1]='X';
			break;
		case 3:
			board[0][2]='X';
			break;
		case 4:
			board[0][3]='X';
			break;
		case 5:
			board[0][4]='X';
			break;
		case 6:
			board[1][0]='X';
			break;
		case 7:
			board[1][1]='X';
			break;
		case 8:
			board[1][2]='X';
			break;
		case 9:
			board[1][3]='X';
			break;
		case 10:
			board[1][4]='X';
			break;
		case 11:
			board[2][0]='X';
			break;
		case 12:
			board[2][1]='X';
			break;
		case 13:
			board[2][2]='X';
			break;
		case 14:
			board[2][3]='X';
			break;
		case 15:
			board[2][4]='X';
			break;
		case 16:
			board[3][0]='X';
			break;
		case 17:
			board[3][1]='X';
			break;
		case 18:
			board[3][2]='X';
			break;
		case 19:
			board[3][3]='X';
			break;
		case 20:
			board[3][4]='X';
			break;
		case 21:
			board[4][0]='X';
			break;
		case 22:
			board[4][1]='X';
			break;
		case 23:
			board[4][2]='X';
			break;
		case 24:
			board[4][3]='X';
			break;
		case 25:
			board[4][4]='X';
			break;
		default:
			cout<<"\nInvalid Choice.......";
			break;	
			
	}
}
