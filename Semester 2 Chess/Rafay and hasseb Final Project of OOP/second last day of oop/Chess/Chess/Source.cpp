#include<iostream>
#include<string>
#include"CHESS.h"

using namespace std;

int main()
{

	CHESS C;

	string choice;
	system("colour 7C");
	do
	{
		system("cls");
		cout << "									 Chess Game                 " << endl;
		cout << endl << endl;
		cout << "					     				 Welcome                    ";

		C.display();
		cout << "Player 1 Turn ";
		cout << endl;
		cout << "Enter the movement : ";
		cin >> choice;
		C.condition(choice);
		system("cls");
		C.display();
		cout << "Player 2 Turn ";
		cout << endl;
		cout << "Enter the movement : ";
		cin >> choice;
		C.condition(choice);
		system("cls");
		C.display();
	} while (true);
	system("pause");
	return 0;
}
