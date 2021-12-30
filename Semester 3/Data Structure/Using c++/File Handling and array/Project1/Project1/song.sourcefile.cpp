#include "song.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	
	int count{};
	char filename[12] = { "student.txt" };
	song s;
	
	int choice;
	do
	{
		cout << endl << "  " << "=====MENU=====" << endl;
		cout << endl << "  " << "1.To Add data in  to the file." << endl;
		cout << endl << "  " << "2.TO display all of the data in the File." << endl;
		cout << endl << "  " << "3.TO display all of the data from the array." << endl;
		cout << endl << "  " << "4.Get the data in to the array." << endl;
		cout << endl << "  " << "Enter the choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			s.add(filename,s.array,count);
			break;
		case 2:
			s.display();
			break;
		case 3:
			s.display_array(count,s.array);
			break;
		case 4:
			s.getdata_array(filename, s.array, count);
			break;
		default:
			cout << endl << "  " << "Invalid choice: ";
			break;
		}
	} while (choice!=4);
	system("pause");
	return 0;
}