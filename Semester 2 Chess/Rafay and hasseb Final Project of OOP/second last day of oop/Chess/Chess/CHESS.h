#pragma once
#include<iostream>
#include<string>

using namespace std;

class CHESS
{
protected:
	string movement[8][8] = {
		"R","N","B","Q","K","B","N","R",
		"P","P","P","P","P","P","P","P",
		"0","1","2","3","4","5","6","7",
		"0","1","2","3","4","5","6","7",
		"0","1","2","3","4","5","6","7",
		"0","1","2","3","4","5","6","7",
		"P","P","P","P","P","P","P","P",
		"R","N","B","Q","K","B","N","R"
	};


public:
	string choice;
	void display();
	void condition(string s);
	CHESS();
	~CHESS();

};
