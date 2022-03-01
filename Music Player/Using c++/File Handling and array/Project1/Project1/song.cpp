#include "song.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void song::add(char fileNme[], string array[], int& enof)
{

	char yes;
	int const size = 3;
	int i = 0;
	
	fstream data("student.txt", ios::out);
	
	student s;
	do
	{
		cout << endl << "  " << "Enter the name of the student: ";
		cin.ignore();
		getline(cin, s.name);
		cout << endl<<"  "<<"Enter the age of the student: ";
		cin >> s.age;
		cout << endl << "  " << "Enter the  roll Number of the student: ";
		cin >> s.roll;

		data.write(reinterpret_cast<char*>(&s), sizeof(s));
		cout << endl << "  " << "Do you like to store the data again: ";
		cin >> yes;

	} while (yes=='Y' && 1<3);

	ifstream take(fileNme);
	take >> enof;
	for (int i = 0; i < enof; i++)
	{
		take >> array[i];
	}
	
	data.close();
}

void song::display()
{
	fstream data;
	data.open("student.txt", ios::in);
	student inv;
	data.read(reinterpret_cast <char*> (&inv), sizeof(inv));
	while (!data.eof())
	{
		cout << endl << "  " << "The name of the student is: ";
		cout << inv.name;
		cout << endl << "  " << "The age of the student is: ";
		cout << inv.age;
		cout << endl << "  " << "The ROll number of the student is: ";
		cout << inv.roll;
	
		data.read(reinterpret_cast <char*> (&inv), sizeof(inv));
	}
	data.close();
}

void song::getdata_array(char fileNme[], string array[], int& enof)
{
	ifstream take(fileNme);
	take >> enof;
	for (int i = 0; i < enof; i++)
	{
		take >> array[i];
	}
}

void song::display_array(int Entity, string array[])
{
	if (array==NULL)
	{
		cout << endl << "  " << "The array is Empty: " << endl;
	}
	else
	{
		for (int i = 0; i < Entity; i++)
		{
			cout << "The data is: " << endl;
			cout << array[i];
			if (!(i % 10))
			{
				cout << endl;
			}
		}
	}
	
}





