#pragma once
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
struct student
{
	string name;
	string age;
	string roll;
};
class song
{
public:
	string array[3];
	void add(char fileNme[], string array[], int& enof);
	void display();
	void getdata_array(char fileNme[], string array[], int &enof);
	void display_array(int Entity, string array[]);
};

