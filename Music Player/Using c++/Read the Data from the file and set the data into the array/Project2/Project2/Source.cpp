#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	int count;
	string hours[3];

	fstream myfile;
	myfile.open("Text.txt");
	if (!myfile)
	{
		cout << endl << "  " << "File is not opened: " << endl;
		system("pause");
		exit(-1);
	}
	count = 0;
	while (!myfile.eof())
	{
		myfile >> hours[count];
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		cout << endl << "  " << "The data is: " << hours[i] << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}