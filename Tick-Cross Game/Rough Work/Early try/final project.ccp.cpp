//#include<iostream>

//using namespace std;


//int main()
//{
//	int board[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	
//	for(int i=0;i<5;i++)
//	for(int j=0;j<=4;j++)
//	cout<<static_cast<char>(88);
//	return 0;
//}//




#include<iostream>

using namespace std;


int main()
{
	int board[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	
	cout<<board[0][0]<<"\t"<<board[0][1]<<"\t"<<board[0][2]<<"\t"<<board[0][3]<<"\t"<<board[0][4]<<"\n";
	cout<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\t"<<board[1][3]<<"\t"<<board[1][4]<<"\n";
	cout<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\t"<<board[2][3]<<"\t"<<board[2][4]<<"\n";
	cout<<board[3][0]<<"\t"<<board[3][1]<<"\t"<<board[3][2]<<"\t"<<board[3][3]<<"\t"<<board[3][4]<<"\n";
	cout<<board[4][0]<<"\t"<<board[4][1]<<"\t"<<board[4][2]<<"\t"<<board[4][3]<<"\t"<<board[4][4]<<"\n";
	int choice;
	cin>>choice;
	if(choice==1)
		{
	
		board[0][0]='X';
		system("cls");
		cout<<static_cast<char>(board[0][0])<<"\t"<<board[0][1]<<"\t"<<board[0][2]<<"\t"<<board[0][3]<<"\t"<<board[0][4]<<"\n";
	cout<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\t"<<board[1][3]<<"\t"<<board[1][4]<<"\n";
	cout<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\t"<<board[2][3]<<"\t"<<board[2][4]<<"\n";
	cout<<board[3][0]<<"\t"<<board[3][1]<<"\t"<<board[3][2]<<"\t"<<board[3][3]<<"\t"<<board[3][4]<<"\n";
	cout<<board[4][0]<<"\t"<<board[4][1]<<"\t"<<board[4][2]<<"\t"<<board[4][3]<<"\t"<<board[4][4]<<"\n";
		
		}
		
			if(choice==2)
			{
	
		board[0][1]='X';
		system("cls");
		cout<<board[0][0]<<"\t"<<static_cast<char>(board[0][1])<<"\t"<<board[0][2]<<"\t"<<board[0][3]<<"\t"<<board[0][4]<<"\n";
	cout<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\t"<<board[1][3]<<"\t"<<board[1][4]<<"\n";
	cout<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\t"<<board[2][3]<<"\t"<<board[2][4]<<"\n";
	cout<<board[3][0]<<"\t"<<board[3][1]<<"\t"<<board[3][2]<<"\t"<<board[3][3]<<"\t"<<board[3][4]<<"\n";
	cout<<board[4][0]<<"\t"<<board[4][1]<<"\t"<<board[4][2]<<"\t"<<board[4][3]<<"\t"<<board[4][4]<<"\n";
	
}
	if(choice==3)
			{
	
		board[0][2]='X';
		system("cls");
		cout<<board[0][0]<<"\t"<<board[0][1]<<"\t"<<static_cast<char>(board[0][2])<<"\t"<<board[0][3]<<"\t"<<board[0][4]<<"\n";
	cout<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\t"<<board[1][3]<<"\t"<<board[1][4]<<"\n";
	cout<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\t"<<board[2][3]<<"\t"<<board[2][4]<<"\n";
	cout<<board[3][0]<<"\t"<<board[3][1]<<"\t"<<board[3][2]<<"\t"<<board[3][3]<<"\t"<<board[3][4]<<"\n";
	cout<<board[4][0]<<"\t"<<board[4][1]<<"\t"<<board[4][2]<<"\t"<<board[4][3]<<"\t"<<board[4][4]<<"\n";
	if(choice==3)
			{
	
		board[0][4]='X';
		system("cls");
		cout<<board[0][0]<<"\t"<<board[0][1]<<"\t"<<board[0][2]<<"\t"<<board[0][3]<<"\t"<<static_cast<char>(board[0][4])<<"\n";
	cout<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\t"<<board[1][3]<<"\t"<<board[1][4]<<"\n";
	cout<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\t"<<board[2][3]<<"\t"<<board[2][4]<<"\n";
	cout<<board[3][0]<<"\t"<<board[3][1]<<"\t"<<board[3][2]<<"\t"<<board[3][3]<<"\t"<<board[3][4]<<"\n";
	cout<<board[4][0]<<"\t"<<board[4][1]<<"\t"<<board[4][2]<<"\t"<<board[4][3]<<"\t"<<board[4][4]<<"\n";
}
}
}


