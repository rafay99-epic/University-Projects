#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
struct Node
{
	string array[3];
	Node* next=nullptr;
	Node* prev = nullptr;;
};
struct music_data
{
	string name;
	string movie;
	string singer;
};
class music
{
private:
	Node* front = nullptr;
	Node* rare = nullptr;
public:
	void insert();
	
	void sort();
	void display();
};

