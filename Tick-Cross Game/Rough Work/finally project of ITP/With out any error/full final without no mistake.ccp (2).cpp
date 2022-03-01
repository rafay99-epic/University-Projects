#include<iostream>
#include<string.h>

using namespace std;
string board[5][5]={{"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"}};
void display_board();
void check_win();
void player_turn1();
void player_turn2();
int i=1;
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
	system("COLOR 4B");
	cout<<"\nPlayer 1 [X] Turn:";
	cin>>choice;
		switch(choice)
	{	
		case 1:
			if(board[0][0]=="1")
			board[0][0]='X';
			else
				{
				cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
				player_turn1();
				}
			break;
		case 2:
			if(board[0][1]=="2")
			board[0][1]='X';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 3:
			if(board[0][2]=="3")
			board[0][2]='X';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			
			break;
		case 4:
			if(board[0][3]=="4")
			board[0][3]='X';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			
			break;
		case 5:
				if(board[0][4]=="5")
			board[0][4]='X';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 6:
			if(board[1][0]=="6")
			board[1][0]='X';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 7:
			if(board[1][1]=="7")
			board[1][1]='X';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 8:
			if(board[1][2]=="8")
			board[1][2]='X';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 9:
			if(board[1][3]=="9")
			board[1][3]='X';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 10:
			if(board[1][4]=="10")
			board[1][4]='X';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 11:
			if(board[2][0]=="11")
			board[2][0]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 12:
			if(board[2][1]=="12")
			board[2][1]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 13:
			if(board[2][2]=="13")
			board[2][2]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 14:
				if(board[2][3]=="14")
			board[2][3]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 15:
			if(board[2][4]=="15")
			board[2][4]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 16:
			if(board[3][0]=="16")
			board[3][0]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 17:
			if(board[3][1]=="17")
			board[3][1]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 18:
			if(board[3][2]=="18")
			board[3][2]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 19:
			if(board[3][3]=="19")
			board[3][3]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 20:
			if(board[3][4]=="20")
			board[3][4]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 21:
			if(board[4][0]=="21")
			board[4][0]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 22:
			if(board[4][1]=="22")
			board[4][1]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 23:
			if(board[4][2]=="23")
			board[4][2]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 24:
			if(board[4][3]=="24")
			board[4][3]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
			break;
		case 25:
			if(board[4][4]=="25")
			board[4][4]="X ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn1();
			}
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
	system("COLOR 6F");
do{
	cout<<"\nPlayer 2 [O] Turn:";
	cin>>choice;
		switch(choice)
	{	
		case 1:
			if(board[0][0]=="1")
			board[0][0]='O';
			else
				{
				cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
				player_turn2();
				}
			break;
		case 2:
			if(board[0][1]=="2")
			board[0][1]='O';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 3:
			if(board[0][2]=="3")
			board[0][2]='O';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			
			break;
		case 4:
			if(board[0][3]=="4")
			board[0][3]='O';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			
			break;
		case 5:
				if(board[0][4]=="5")
			board[0][4]='O';
				else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 6:
			if(board[1][0]=="6")
			board[1][0]='O';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 7:
			if(board[1][1]=="7")
			board[1][1]='O';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 8:
			if(board[1][2]=="8")
			board[1][2]='O';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 9:
			if(board[1][3]=="9")
			board[1][3]='O';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 10:
			if(board[1][4]=="10")
			board[1][4]='O';
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 11:
			if(board[2][0]=="11")
			board[2][0]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 12:
			if(board[2][1]=="12")
			board[2][1]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 13:
			if(board[2][2]=="13")
			board[2][2]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 14:
				if(board[2][3]=="14")
			board[2][3]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 15:
			if(board[2][4]=="15")
			board[2][4]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 16:
			if(board[3][0]=="16")
			board[3][0]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 17:
			if(board[3][1]=="17")
			board[3][1]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 18:
			if(board[3][2]=="18")
			board[3][2]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 19:
			if(board[3][3]=="19")
			board[3][3]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 20:
			if(board[3][4]=="20")
			board[3][4]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 21:
			if(board[4][0]=="21")
			board[4][0]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 22:
			if(board[4][1]=="22")
			board[4][1]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 23:
			if(board[4][2]=="23")
			board[4][2]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 24:
			if(board[4][3]=="24")
			board[4][3]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		case 25:
			if(board[4][4]=="25")
			board[4][4]="O ";
			else
			{
			cout<<"Invalid Choice.......\n Player 1 [X] Turn:";
			player_turn2();
			}
			break;
		default:
			cout<<"\nInvalid Choice.......";
			break;	
			
	}
}while(choice>25||choice<1);
		
}

void check_win()
{	i++;
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
	if((board[0][3]=="X")&&(board[1][3]=="X")&&(board[2][3]=="X ")&&(board[3][3]=="X ")&&(board[4][3]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
		if((board[0][4]=="X")&&(board[1][4]=="X")&&(board[2][4]=="X ")&&(board[3][4]=="X ")&&(board[4][4]=="X "))
	{
	cout<<"\nPlayer 1 wins congurats........";
	exit(0);
	}
	
	
	
	
	
	if(i==25)
	{	
	cout<<"Draw";
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
	if((board[0][3]=="O")&&(board[1][3]=="O")&&(board[2][3]=="O ")&&(board[3][3]=="O ")&&(board[4][3]=="O "))
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
