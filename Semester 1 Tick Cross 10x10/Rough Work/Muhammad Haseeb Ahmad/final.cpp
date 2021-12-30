#include<iostream>
#include<string.h>

using namespace std;
string board[5][5]={{"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"}};
void display_board();
void check_win();
void player_turn1();
void player_turn2();
int main()
{
	int i;
	
	while(i!=25)
	{
	system("COLOR 6F");
		display_board();
	player_turn1();
	display_board();
	
	check_win();
	player_turn2();
	display_board();
	check_win();
	}
}

void display_board()
{
		
		system("CLS");
		
	cout<<"\t\tTick Cross Game\n";
	cout<<"\tPalyer 1 [X]\n\tPlayer 2 [O]\n";
	
	
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
	
//	cout<<"\n\nPlayer 1[X] Turn:";
}

void player_turn1()
{	
int choice;
do{
	cout<<"\nPlayer 1 [X] Turn:";
	cin>>choice;
		switch(choice)
	{	
		case 1:
			if(board[0][0]=="1")
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
			board[2][0]="X ";
			break;
		case 12:
			board[2][1]="X ";
			break;
		case 13:
			board[2][2]="X ";
			break;
		case 14:
			board[2][3]="X ";
			break;
		case 15:
			board[2][4]="X ";
			break;
		case 16:
			board[3][0]="X ";
			break;
		case 17:
			board[3][1]="X ";
			break;
		case 18:
			board[3][2]="X ";
			break;
		case 19:
			board[3][3]="X ";
			break;
		case 20:
			board[3][4]="X ";
			break;
		case 21:
			board[4][0]="X ";
			break;
		case 22:
			board[4][1]="X ";
			break;
		case 23:
			board[4][2]="X ";
			break;
		case 24:
			board[4][3]="X ";
			break;
		case 25:
			board[4][4]="X ";
			break;
		default:
			cout<<"\nInvalid Choice.......";
			break;	
			
	}
}while(choice>25||choice<1);


}
void player_turn2()
{
	int choice;
	do{
	cout<<"\nPlayer 2 [O] Turn:";
	cin>>choice;
		switch(choice)
	{	
		case 1:
			if(board[0][0]=="1")
			board[0][0]='O';
			else
			cout<<"You entered wrond number";
			cout<<"Enter again";
			cin>>choice;
			void player_turn2();
			break;
		case 2:
			board[0][1]='O';
			break;
		case 3:
			board[0][2]='O';
			break;
		case 4:
			board[0][3]='O';
			break;
		case 5:
			board[0][4]='O';
			break;
		case 6:
			board[1][0]='O';
			break;
		case 7:
			board[1][1]='O';
			break;
		case 8:
			board[1][2]='O';
			break;
		case 9:
			board[1][3]='O';
			break;
		case 10:
			board[1][4]='O';
			break;
		case 11:
			board[2][0]="O ";
			break;
		case 12:
			board[2][1]="O ";
			break;
		case 13:
			board[2][2]="O ";
			break;
		case 14:
			board[2][3]="O ";
			break;
		case 15:
			board[2][4]="O ";
			break;
		case 16:
			board[3][0]="O ";
			break;
		case 17:
			board[3][1]="O ";
			break;
		case 18:
			board[3][2]="O ";
			break;
		case 19:
			board[3][3]="O ";
			break;
		case 20:
			board[3][4]="O ";
			break;
		case 21:
			board[4][0]="O ";
			break;
		case 22:
			board[4][1]="O ";
			break;
		case 23:
			board[4][2]="O ";
			break;
		case 24:
			board[4][3]="O ";
			break;
		case 25:
			board[4][4]="O ";
			break;
		default:
			cout<<"\nInvalid Choice.......";
			break;	
			
	}
	}while(choice>25||choice<1);
		
}

void check_win()
{
	if((board[0][0]=="X")&&(board[0][1]=="X")&&(board[0][2]=="X")&&(board[0][3]=="X")&&(board[0][4]=="X"))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[1][0]=="X")&&(board[1][1]=="X")&&(board[1][2]=="X")&&(board[1][3]=="X")&&(board[1][4]=="X"))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[2][0]=="X ")&&(board[2][1]=="X ")&&(board[2][2]=="X ")&&(board[2][3]=="X ")&&(board[2][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[3][0]=="X ")&&(board[3][1]=="X ")&&(board[3][2]=="X ")&&(board[3][3]=="X ")&&(board[3][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[4][0]=="X ")&&(board[4][1]=="X ")&&(board[4][2]=="X ")&&(board[4][3]=="X ")&&(board[4][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
		if((board[0][0]=="X")&&(board[1][1]=="X")&&(board[2][2]=="X ")&&(board[3][3]=="X ")&&(board[4][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[0][4]=="X")&&(board[1][3]=="X")&&(board[2][2]=="X ")&&(board[3][1]=="X ")&&(board[4][0]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[0][0]=="X")&&(board[1][0]=="X")&&(board[2][0]=="X ")&&(board[3][0]=="X ")&&(board[4][0]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[0][1]=="X")&&(board[1][1]=="X")&&(board[2][1]=="X ")&&(board[3][1]=="X ")&&(board[4][1]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[0][2]=="X")&&(board[1][2]=="X")&&(board[2][2]=="X ")&&(board[3][2]=="X ")&&(board[4][2]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	if((board[0][3]=="X ")&&(board[1][3]=="X ")&&(board[2][3]=="X ")&&(board[3][3]=="X ")&&(board[4][3]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
		if((board[0][4]=="X")&&(board[1][4]=="X")&&(board[2][4]=="X ")&&(board[3][4]=="X ")&&(board[4][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	
	
	
	
	
	
	
	if((board[0][0]=="O")&&(board[0][1]=="O")&&(board[0][2]=="O")&&(board[0][3]=="O")&&(board[0][4]=="O"))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[1][0]=="O")&&(board[1][1]=="O")&&(board[1][2]=="O")&&(board[1][3]=="O")&&(board[1][4]=="O"))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[2][0]=="O ")&&(board[2][1]=="O ")&&(board[2][2]=="O ")&&(board[2][3]=="O ")&&(board[2][4]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[3][0]=="O ")&&(board[3][1]=="O ")&&(board[3][2]=="O ")&&(board[3][3]=="O ")&&(board[3][4]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[4][0]=="O ")&&(board[4][1]=="O ")&&(board[4][2]=="O ")&&(board[4][3]=="O ")&&(board[4][4]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
		if((board[0][0]=="O")&&(board[1][1]=="O")&&(board[2][2]=="O ")&&(board[3][3]=="O ")&&(board[4][4]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][4]=="O")&&(board[1][3]=="O")&&(board[2][2]=="O ")&&(board[3][1]=="O ")&&(board[4][0]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][0]=="O")&&(board[1][0]=="O")&&(board[2][0]=="O ")&&(board[3][0]=="O ")&&(board[4][0]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][1]=="O")&&(board[1][1]=="O")&&(board[2][1]=="O ")&&(board[3][1]=="O ")&&(board[4][1]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][2]=="O")&&(board[1][2]=="O")&&(board[2][2]=="O ")&&(board[3][2]=="O ")&&(board[4][2]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][3]=="O ")&&(board[1][3]=="O ")&&(board[2][3]=="O ")&&(board[3][3]=="O ")&&(board[4][3]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	if((board[0][4]=="O")&&(board[1][4]=="O")&&(board[2][4]=="O ")&&(board[3][4]=="O ")&&(board[4][4]=="O "))
	{
	cout<<"\nPlayer 2 wins congurats........";
	exit(0);
	}
	
	
}
