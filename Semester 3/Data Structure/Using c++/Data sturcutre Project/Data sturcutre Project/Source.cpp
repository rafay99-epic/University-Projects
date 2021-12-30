#include "music.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	Node n;
	int count{};
	int choice;
	char yes;
	int const size = 3;
	int i = 0;
	music_data s;
	fstream data("music.txt", ios::out);
	ifstream take("music.txt");
	take >> count;
	
	do
	{
		cout << endl << "  " << "=====MENU=====" << endl;
		cout << endl << "  " << "1.To Enter the data in to the File. " << endl;
		cout << endl << "  " << "2.To display all of the data." << endl;
		cout << endl << "  " << "Enter the choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			do
			{
				cout << endl << "  " << "Enter the name of the song: ";
				cin.ignore();
				getline(cin, s.name);
				cout << endl << "  " << "Enter the name of movie: ";
				cin.ignore();
				getline(cin, s.movie);
				cout << endl << "  " << "Enter the  name of the Singer: ";
				cin.ignore();
				getline(cin, s.singer);

				data.write(reinterpret_cast<char*>(&s), sizeof(s));
				cout << endl << "  " << "Do you like to store the data again: ";
				cin >> yes;

			} while (yes == 'Y' && 1 < 3);
			for (int i = 0; i < count; i++)
			{
				take >> n.array[i];
			}
			break;
		default:
			break;
		}
	} while (choice!=3);

	
	system("pause");
	return 0;
}